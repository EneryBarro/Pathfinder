#include "../inc/pathfinder.h"

void mx_save_route(t_route current_route, t_list **short_path, int i, t_island islands) {

    if (current_route.i > i) {
        int tmp = INDEX(i, current_route.i, islands.count);

        if (!short_path[tmp]) {
            mx_push_back(&short_path[tmp], mx_create_route(current_route.list, current_route.len, islands.matrix));
        }
        else if (*((int*)(short_path[tmp]->data)) == mx_rdist(current_route.list, current_route.len, islands.matrix)) {
            mx_push_back(&short_path[tmp], mx_create_route(current_route.list, current_route.len, islands.matrix));
        }
        else if (*((int*)(short_path[tmp]->data)) > mx_rdist(current_route.list, current_route.len, islands.matrix)) {
            mx_clear_route(&short_path[tmp]);
            mx_push_back(&short_path[tmp], mx_create_route(current_route.list, current_route.len, islands.matrix));
        }
    }
}
