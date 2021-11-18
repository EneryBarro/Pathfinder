#include "../inc/pathfinder.h"

char *mx_invalid_file(int argc, char *argv[]) {
    
    int fd = -2;
    char *file = NULL;

    if (argc != 2) {
        mx_errors(INV_ARGC, NULL);
    }
    fd = open(argv[1], O_RDONLY);
    if (errno) {
        mx_errors(FILE_NOT_EXIST, argv[1]);
    }
    close(fd);
    file = mx_file_to_str(argv[1]);
    if (!file) {
        mx_errors(FILE_EMPTY, argv[1]);
    }
    return file;
}

