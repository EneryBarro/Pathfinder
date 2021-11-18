#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "../libmx/inc/libmx.h"

#define INDEX(i, j, n) i * (2 * n - 3 - i) / 2 + j - 1

enum errors {
    INV_ARGC,
    FILE_NOT_EXIST,
    FILE_EMPTY,
    INV_FIRST_LINE,
    INV_LINE,
    INV_NUM
};

typedef struct s_bridge {
    int w1;
    int w2;
} t_bridge;

typedef struct s_island {
    int count;
    int **matrix;
    char **names;
} t_island;

typedef struct s_route {
    int i;
    int len;
    t_list *list;
    int j;
    int present_island;
    char f;
} t_route;


void mx_add_island(t_island *islands, t_route *current_route, int *used_island, int *nums);
void mx_algorithm(t_list **short_path, t_island islands, int *used_island, int *nums);
int mx_choose_island(int *used_island, int n);
void mx_init_island(int *arr, int len, int index);
void mx_check_fline(char *file);
void mx_check_line(char *line, int num);
char ***mx_arr_words(char *file, int *lines_count, int *isl_count);
int **mx_create_matrix(int row, int col, int val);
char **mx_create_names(int count, const char *s);
int mx_word(char **arr, char *word);
void mx_fill_matrix(int lines_count, t_island islands, char ***extra_names);
t_island mx_create_island(int argc, char *argv[]);
void mx_errors(int err_num, char *text);
void mx_fill_bridge(int **matrix, t_bridge bridge, char *s);
char *mx_invalid_file(int argc, char *argv[]);
void mx_print_path(t_list **pathes, char **names, int **matrix, int count);
void mx_distance(int *route, int **matrix);
void mx_route(int *route, char **names);
void mx_path(t_list *pathes, char **names, int **matrix);
int mx_rdist(t_list *current_route, int len, int **matrix);
int *mx_create_route(t_list *route, int len, int **matrix);
void mx_clear_route(t_list **head);
t_route mx_add_route(int i, int *nums);
void mx_save_route(t_route current_route, t_list **short_path, int i, t_island islands);

#endif
