#include "../inc/pathfinder.h"

void mx_route(int *route, char **names) {
    
    int i = 0;

    mx_printstr("Route: ");
    for (i = 0; i < route[1] - 1; i++) {
        mx_printstr(names[route[i + 2]]);
        mx_printstr(" -> ");
    }
    mx_printstr(names[route[i + 2]]);
    mx_printstr("\n");
}
