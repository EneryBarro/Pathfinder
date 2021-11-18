#include "../inc/pathfinder.h"

t_route mx_add_route(int i, int *nums) {
    
    t_route current_route = {i, 1, 0, -1, -1, 0};

    current_route.list = mx_create_node(&nums[i]);
    return current_route;
}
