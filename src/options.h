#ifndef OPTIONS_H
#define OPTIONS_H

#include <assert.h>
#include <string.h>

enum arg_type {no_argument, required_argument, optional_argument};

struct options {
    const char* const name;
    const char* const summary;
    enum arg_type has_arg;
    char short_name;
};

int get_option(int argc, char** argv,
        struct options* ops_list, int num_options, int current_arg) {

    assert(current_arg < argc);

    for (int i = 0; i < num_options; i++) {
        char dashed_op[sizeof ops_list[i] + 2] = "";
        if (strstr(argv[current_arg], "--")) {
            strcat(dashed_op, "--");
            strcat(dashed_op, ops_list[i].name);
            
            int match = strcmp(dashed_op, argv[current_arg]);

            if (match == 0) {
                return ops_list[i].short_name;
            }
        } else {
            dashed_op[0] = '-';
            dashed_op[1] = ops_list[i].short_name;

            int match = strcmp(dashed_op, argv[current_arg]);

            if (match == 0) {
                return ops_list[i].short_name;
            }
        }
    }
    return '?';
}

#endif
