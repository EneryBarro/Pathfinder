#include "../inc/pathfinder.h"

static void err_not_exist(int err_num, char *text) {

    mx_printerror("error: file ");
    mx_printerror(text);
    mx_printerror(" does not exist\n");
    exit(err_num);
}

static void err_file_empty(int err_num, char *text) {

    mx_printerror("error: file ");
    mx_printerror(text);
    mx_printerror(" is empty\n");
    exit(err_num);
}

static void err_line(int err_num, char *text) {

    mx_printerror("error: line ");
    mx_printerror(text);
    mx_printerror(" is not valid\n");
    exit(err_num);
}


void mx_errors(int err_num, char *text) {
    
    if (err_num < 0) {
        return;
    }
    switch (err_num) {
        case INV_NUM:
            mx_printerror("error: invalid number of islands\n");
            exit(err_num);
        case INV_ARGC:
            mx_printerror("usage: ./pathfinder [filename]\n");
            exit(err_num);
        case FILE_NOT_EXIST:
            err_not_exist(err_num, text);
        case FILE_EMPTY:
            err_file_empty(err_num, text);
        case INV_FIRST_LINE:
            mx_printerror("error: line 1 is not valid\n");
            exit(err_num);
        case INV_LINE:
            err_line(err_num, text);
    }
}

