#include "../inc/pathfinder.h"

void mx_init_island(int *arr, int len, int index) {
    
    for (int i = 0; i < len; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
    arr[index] = 1;
}
