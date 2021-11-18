#include "../inc/pathfinder.h"

void mx_print_path(t_list **pathes, char **names, int **matrix, int count) {
    
    for (int i = 0; i < count; i++) {
        mx_path(pathes[i], names, matrix);
    }
}
