#include "../inc/pathfinder.h"

void mx_fill_matrix(int lines_count, t_island islands, char ***extra_names) {

    int count = 0;
    t_bridge bridge = {-2, -2};

    for (int i = 0; i < lines_count - 1; i++) {
        if ((bridge.w1 = mx_word(islands.names, extra_names[i][0])) < 0) {
            mx_errors(count == islands.count ? INV_NUM : -1, "");
            islands.names[count] = mx_strdup(extra_names[i][0]);
            bridge.w1 = count++;
        }
        if ((bridge.w2 = mx_word(islands.names, extra_names[i][1])) < 0) {
            mx_errors(count == islands.count ? INV_NUM : -1, "");
            islands.names[count] = mx_strdup(extra_names[i][1]);
            bridge.w2 = count++;
        }
        mx_fill_bridge(islands.matrix, bridge, extra_names[i][1]);
    }
    if (count < islands.count) {
        mx_errors(INV_NUM, NULL);
    }
}
