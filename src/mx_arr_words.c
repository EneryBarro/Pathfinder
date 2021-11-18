#include "../inc/pathfinder.h"

char ***mx_arr_words(char *file, int *lines_count, int *isl_count) {
    
    char **file_lines = mx_strsplit_ncount(file, '\n', lines_count);
    int island_count = mx_atoi(file_lines[0]);
    *isl_count = island_count;
    char ***extra_names = NULL;

    mx_check_fline(file);
    for (int i = 1; file_lines[i]; i++) {
        mx_check_line(file_lines[i], i + 1);
    }
    extra_names = (char***) malloc((*lines_count - 1) * sizeof(char**));
    for (int i = 0; i < *lines_count - 1; i++) {
        extra_names[i] = mx_strsplit(file_lines[i + 1], '-');
    }
    for (int i = 0; i < *lines_count - 1; i++) {
        extra_names[i][1][mx_get_char_index(extra_names[i][1], ',')]
                = 0;
    }
    mx_del_strarr(&file_lines);
    return extra_names;
}
