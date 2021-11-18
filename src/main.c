#include "../inc/pathfinder.h"


int main(int argc, char *argv[]) {

    t_island islands = mx_create_island(argc, argv);
    int routes_count = (islands.count * (islands.count - 1)) / 2;
    t_list **short_path = (t_list**)malloc(sizeof(t_list*) * routes_count);
    int *used_island = (int*) malloc(sizeof(int) * islands.count);
    int *nums = (int*) malloc(sizeof(int) * islands.count);

    for (int i = 0; i < islands.count; i++) {
        nums[i] = i;
    }
    for (int i = 0; i < islands.count; i++) {
        used_island[i] = -1;
    }
    for (int i = 0; i < routes_count; i++) {
        short_path[i] = NULL;
    }

    mx_algorithm(short_path, islands, used_island, nums);
    mx_print_path(short_path, islands.names, islands.matrix, routes_count);
}

