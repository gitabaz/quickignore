#include <stdio.h>
#include <stdlib.h>

#include "options.h"

#include "lang_list.h"
#include "build_output.h"

#define NUM_OPTIONS 4
#define NUM_COLS 7
#define NUM_ROWS (NUM_LANGS / NUM_COLS + NUM_LANGS % NUM_COLS)

int main(int argc, char** argv) {

    if (argc < 2) {
        puts("quickignore: try 'quickignore --help' for more information");
    } else {
        char default_output_filename[] = "testgitignore";
        struct options ops_list[NUM_OPTIONS] =
        {
            {"help", "This help text", no_argument, 0, 'h'},
            {"list", "List languages with available templates", required_argument, 0, 'l'},
            {"template", "Generate .gitignore template for specified languages", required_argument, 0, 't'},
            {"output-file", "Specify output file (default .gitignore)", required_argument, default_output_filename, 'o'}
        };

        int c = 0;
        int current_arg = 1;

        struct worker wk = {
            .num_languages = argc - current_arg,
            .languages = &argv[current_arg],
            .output_filename = default_output_filename
        };

        while (current_arg < argc) {
            if (c == -1)
                break;

            c = get_option(argc, argv, ops_list, NUM_OPTIONS, current_arg);

            switch (c) {
                case 'h':
                    puts("Usage: quickignore [options...] -t <languages>");

                    for (int i = 0; i < NUM_OPTIONS; ++i) {
                        printf("-%c, --%s %s\n", ops_list[i].short_name, ops_list[i].name, ops_list[i].summary);
                    }

                    exit(EXIT_SUCCESS);
                    
                case 'l':
                    for (int i = 0; i < NUM_ROWS; ++i) {
                        printf("%-30s", lang_list[i]);
                        for (int j = 1; j < NUM_COLS; ++j) {
                            if ( j*NUM_ROWS+i < NUM_LANGS) {
                                printf("\t%-30s", lang_list[j*NUM_ROWS + i]);
                            } else {
                                break;
                            }
                        }
                        printf("\n");
                    }
                    exit(EXIT_SUCCESS);
                    break;

                case 'o':
                    if (argv[current_arg + 1]) {
                        wk.output_filename = argv[current_arg + 1];
                        current_arg++;
                    } else {
                        printf("quickignore: output file not specified\n");
                        exit(EXIT_FAILURE);
                    }
                    break;

                case 't':
                    // Break out of loop, rest of arguments should be languages to process
                    c = -1;
                    break;

                case '?':
                        printf("quickignore: illegal option %s\n"
                                "quickignore: try 'quickignore --help' for more information",
                                argv[current_arg]);

                        exit(EXIT_FAILURE);
                        break;
            }
            current_arg++;
        }

        wk.num_languages = argc - current_arg;
        wk.languages = &argv[current_arg];
        
        printf("Output file name: %s\n", wk.output_filename);

        printf("Proceed? [y/n]: ");
        char proceed = 'n';
        scanf("%c", &proceed);

        if (proceed == 'y') {
            build_output(&wk);
        } else {
            puts("quickignore: operation canceled");
        }
    }

    return EXIT_SUCCESS;
}
