#include "../inc/pathfinder.h"

void mx_check_fline(char *file) {
    
    int len = mx_get_char_index(file, '\n');

    if (len > 0) {
        for (int i = 0; i < len; i++) {
            if (!mx_isdigit(file[i])) {
                mx_errors(INV_FIRST_LINE, NULL);
            }
        }
        return;
    }
    mx_errors(INV_FIRST_LINE, NULL);
}
