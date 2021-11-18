#include "../inc/pathfinder.h"

void mx_algorithm(t_list **short_path, t_island islands, int *used_island, int *nums) {
    
    for (int i = 0; i < islands.count - 1; i++) {
        t_route rou = mx_add_route(i, nums);

        mx_init_island(used_island, islands.count, i);
        while(rou.list) {
            mx_add_island(&islands, &rou, used_island, nums);
            while((rou.j = mx_choose_island(used_island + (rou.present_island + 1),
                                          islands.count - rou.present_island - 1)) < 0 || rou.f) {
                rou.j += rou.present_island + 1;
                rou.f = 0;
                mx_save_route(rou, short_path, i, islands);
                used_island[rou.i] = 0;
                rou.present_island = rou.i;
                mx_pop_front(&rou.list);
                if (rou.list)
                    rou.i = *((int*)(rou.list->data));
                rou.len -= 1;
            }
        }
    }
}
