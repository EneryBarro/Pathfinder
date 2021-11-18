#include "../inc/pathfinder.h"

char **mx_create_names(int count, const char *s) {
    
    char **names = (char**) malloc((count + 1) * sizeof(char*));

    names[count] = NULL;
    for (int i = 0; i < count; i++) {
        names[i] = (char*)s;
    }
    return names;
}
