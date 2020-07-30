#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "lang_list.h"
#include "get_template.h"

struct worker {
    int num_languages;
    char** languages;
    char* output_filename;
};

bool lang_exists(char* lang, int* idx) {

    for (int i = 0; lang[i]; ++i) {
        lang[i] = tolower(lang[i]);
    }

    for (int i = 0; i < NUM_LANGS; ++i) {
        if (strcmp(lang, lang_list[i]) == 0) {
            *idx = i;
            return true;
        }
    }
    
    return false;
}

void build_output(struct worker* wk) {

        FILE* output_file = fopen(wk->output_filename, "w");

        if (!output_file) {
            printf("quickignore: error opening file %s", wk->output_filename);
            exit(EXIT_FAILURE);
        } else {
            puts("Generating template for languages:");

            int idx = 0;
            unsigned char* template_text = NULL;
            unsigned int template_text_len = 0;
            for (int i = 0; i < wk->num_languages; ++i) {
                printf("%s ...", wk->languages[i]);

                if (lang_exists(wk->languages[i], &idx)) {
                    get_template(idx, &template_text, &template_text_len);

                    fwrite(template_text, template_text_len, 1, output_file);

                    puts(" done");
                } else {
                    puts(" not found -- skipping");
                }
            }

            puts("quickignore: completed");
            fclose(output_file);
        }
}

