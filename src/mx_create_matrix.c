#include "../inc/pathfinder.h"

int **mx_create_matrix(int row, int col, int val) {
    
    int i = 0;
    int j = 0;
    int **arr = (int **)malloc(row * sizeof(int *));

    for (i = 0; i < row; i++)
        arr[i] = (int *)malloc(col * sizeof(int));
    for (i = 0; i <  row; i++)
        for (j = 0; j < col; j++)
            arr[i][j] = val;
    return arr;
}
