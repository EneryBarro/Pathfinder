#include "../inc/pathfinder.h"

int mx_rdist(t_list *current_route, int len, int **matrix) {
    
    int dist = 0;

    for (int i = 0; i < len - 1; i++) {
        dist += matrix[*((int*)(current_route->data))]
        [*((int*)(current_route->next->data))];
        current_route = current_route->next;
    }
    return dist;
}
