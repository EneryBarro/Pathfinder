#include "../inc/pathfinder.h"

int *mx_create_route(t_list *route, int len, int **matrix) {
    
    int *new_route = (int*)malloc(sizeof(int) * (len + 2));
    int dist = 0;
    int i = 2;

    for (i = 0; i < len - 1; i++) {
        dist += matrix[*((int*)(route->data))]
        [*((int*)(route->next->data))];
        new_route[len + 1 - i] = *((int*)(route->data));
        route = route->next;
    }
    new_route[2] = *((int*)(route->data));
    new_route[0] = dist;
    new_route[1] = len;
    return new_route;
}
