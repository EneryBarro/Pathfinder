#include "../inc/pathfinder.h"

void mx_path(t_list *pathes, char **names, int **matrix) {
    
    int len = -1;

    while (pathes) {
        len = *((int*)(pathes->data) + 1);
        mx_printstr("========================================\nPath: ");
        mx_printstr(names[*((int*)(pathes->data) + 2)]);
        mx_printstr(" -> ");
        mx_printstr(names[*((int*)(pathes->data) + len + 1)]);
        mx_printstr("\n");
        mx_route(pathes->data, names);
        mx_distance(pathes->data, matrix);
        mx_printstr("========================================\n");
        pathes = pathes->next;
    }
}
