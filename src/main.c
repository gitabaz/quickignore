#include <stdio.h>
#include <stdlib.h>

#include "options.h"

#define NUM_OPTIONS 3

int main(int argc, char** argv) {

    if (argc < 2) {
        puts("quickignore: try 'quickignore --help' for more information");
    } else {
        char output_filename[] = ".gitignore";
        struct options ops_list[NUM_OPTIONS] =
        {
            {"help", "This help text", no_argument, 0, 'h'},
            {"langs", "Generate .gitignore template for specified languages", required_argument, 0, 'l'},
            {"output-file", "Specify output file (default .gitignore)", required_argument, output_filename, 'o'}
        };

        int c = 0;
        int current_arg = 1;
        while (current_arg < argc) {
            if (c == -1)
                break;

            c = get_option(argc, argv, ops_list, NUM_OPTIONS, current_arg);

            switch (c) {
                case 'h':
                    puts("Usage: quickignore [options...] -l <languages>");
                    for (int i = 0; i < NUM_OPTIONS; i++) {
                        printf("-%c, --%s %s\n", ops_list[i].short_name, ops_list[i].name, ops_list[i].summary);
                    }
                    exit(0);
                case 'o':
                    if (argv[current_arg + 1]) {
                        //output_filename = argv[current_arg + 1];
                        printf("Output file: %s\n", argv[current_arg + 1]);
                        current_arg++;
                    } else {
                        printf("quickignore: output file not specified\n");
                        exit(0);
                    }
                    break;
                case 'l':
                    // Break out of loop, rest of arguments should be languages to process
                    c = -1;
                    break;
                case '?':
                        printf("quickignore: illegal option %s\n", argv[current_arg]);
                        puts("quickignore: try 'quickignore --help' for more information");
                        exit(0);

            }
            current_arg++;
        }

        puts("Generating template for languages:");
        for (int i = current_arg; i < argc; i++){
            printf("%s\n", argv[i]);
        }

        printf("Proceed? [y/n]: ");
        char proceed = 'n';
        scanf("%c", &proceed);

        if (proceed == 'y')
            puts("quickignore: completed");
        else
            puts("quickignore: canceled");

    }

    return EXIT_SUCCESS;

}
