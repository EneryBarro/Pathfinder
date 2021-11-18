#include "../inc/pathfinder.h"

void mx_check_line(char *line, int num) {

    int h_i = mx_get_char_index(line, '-');
    int c_i = mx_get_char_index(line, ',');

    if (h_i > 0 && c_i > h_i + 1 && c_i < mx_strlen(line) - 1) {
        for (int i = 0; i < h_i; i++) {
            if (!mx_isalpha(line[i])) {
                mx_errors(INV_LINE, mx_itoa(num));
            }
        }
        for (int i = h_i + 1; i < c_i; i++) {
            if (!mx_isalpha(line[i])) {
                mx_errors(INV_LINE, mx_itoa(num));
            }
        }
        for (int i = c_i + 1; line[i]; i++) {
            if (!mx_isdigit(line[i]))
                mx_errors(INV_LINE, mx_itoa(num));
        }
        return;
    }
    mx_errors(INV_LINE, mx_itoa(num));
}
