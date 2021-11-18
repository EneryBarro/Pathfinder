#include "../inc/pathfinder.h"

int mx_choose_island(int *used_island, int n) {
    
    if (!n) {
        return -1;
    }
    for (int i = 0; i < n; i++) {
        if (!used_island[i]) {
            return i;
        }
    }
    return -1;
}

