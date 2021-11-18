#include "../inc/pathfinder.h"

int mx_word(char **arr, char *word) {
    
    for (int i = 0; arr[i]; i++) {
        if (!mx_strcmp(arr[i], word))
            return i;
    }
    return -1;
}
