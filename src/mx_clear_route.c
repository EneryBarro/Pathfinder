#include "../inc/pathfinder.h"

void mx_clear_route(t_list **head) {
    
    if (!*head
            || !head) {
        return;
    }
    while (*head) {
        free((*head)->data);
        mx_pop_front(head);
    }
}
