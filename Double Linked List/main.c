#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

int main() {
    struct ll *list = NULL;
    struct ll *found_node = malloc(sizeof(*found_node));

    insertTail(&list, 5);
    insertTail(&list, 8);
    insertHead(&list, 4);
    insertHead(&list, 3);

    found_node = searchNode(list, 4);
    if (found_node != 0x0) {
        printf("Found: %d\n", found_node->number);
        printf("Found next: %d\n", found_node->next->number);
        printf("Found prev: %d\n", found_node->prev->number);
    }
    printList(list);
    return 0;
}