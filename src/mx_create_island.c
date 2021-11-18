#include "../inc/pathfinder.h"

t_island mx_create_island(int argc, char *argv[]) {

    int val = -1;
    char *file = mx_invalid_file(argc, argv);
    int lines_count = 0;
    t_island isls = {0};
    char ***extra_names = mx_arr_words(file, &lines_count, &isls.count);

    isls.matrix = mx_create_matrix(isls.count, isls.count, val);
    isls.names = mx_create_names(isls.count, "");
    mx_fill_matrix(lines_count, isls, extra_names);
    free(file);
    for (int i = 0; i < lines_count - 1; i++) {
        mx_del_strarr(&extra_names[i]);
    }
    free(extra_names);
    extra_names = NULL;
    return isls;
}
