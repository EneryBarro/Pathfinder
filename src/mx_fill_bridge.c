#include "../inc/pathfinder.h"

void mx_fill_bridge(int **matrix, t_bridge bridge, char *s) {
    
    matrix[bridge.w1][bridge.w2] = mx_atoi(s + mx_strlen(s) + 1);
    matrix[bridge.w2][bridge.w1] = matrix[bridge.w1][bridge.w2];
}

