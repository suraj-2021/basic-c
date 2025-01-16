#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void number_of_nodes(struct node *head);

int main() {
    struct node *head = malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    if (current == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    current->data = 50;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    if (current == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    current->data = 100;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    if (current == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    current->data = 200;
    current->link = NULL;
    head->link->link->link = current;

    number_of_nodes(head);

    return 0;
}

void number_of_nodes(struct node *head) {
    if (head != NULL) {
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("%d ", ptr->data + 30);  // Printing with space for readability
            ptr = ptr->link;  // Corrected to move to the next node
        }
        printf("\n");  // Newline after printing all data
    }
}
