#include "../inc/pathfinder.h"

void mx_distance(int *route, int **matrix) {
    
    int i = 0;

    mx_printstr("Distance: ");
    for (i = 0; i < route[1] - 2; i++) {
        mx_printint(matrix[route[i + 2]][route[i + 3]]);
        mx_printstr(" + ");
    }
    if (route[1] > 2) {
        mx_printint(matrix[route[i + 2]][route[i + 3]]);
        mx_printstr(" = ");
    }
    mx_printint(route[0]);
    mx_printstr("\n");
}
