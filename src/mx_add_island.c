#include "../inc/pathfinder.h"

void mx_add_island(t_island *islands, t_route *current_route, int *used_island, int *nums) {

    while((current_route->j = mx_choose_island(used_island + current_route->present_island + 1, islands->count - current_route->present_island - 1)) >= 0) {
        current_route->j += current_route->present_island + 1;
        while (islands->matrix[current_route->i][current_route->j] < 0
               || used_island[current_route->j]) {
            if (++(current_route->j) == islands->count) {
                break;
            }
        }
        if (current_route->j == islands->count) {
            current_route->f = 1;
            break;
        }
        mx_push_front(&(current_route->list), &(nums[current_route->j]));
        current_route->len += 1;
        current_route->i = *((int*)((current_route->list)->data));
        used_island[current_route->i] = 1;
        current_route->present_island = -1;
    }
}
