#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int num;
    char name[20];
    struct Node* next;
} Node;

Node* create_node(int num, char* name) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->num = num;
    strcpy(head->name, name);
    head->next = NULL;
    return head;
}

void insert_node(Node* head, int num, char* name) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->num = num;
    strcpy(node->name, name);
    node->next = NULL;
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = node;
}

void delete_node(Node* head, int num) {
    Node* current = head, *prev = NULL;
    if (current != NULL && current->num == num) {
        head = current->next;
        free(current);
        return;
    }
    while (current != NULL && current->num != num) {
        prev = current;
        current = current->next;
    }
    if (current != NULL) {
        prev->next = current->next;
        free(current);
    }
}

void free_list(Node* head) {
    Node* current = head, *next = NULL;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

void print_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("Node(num=%d, name='%s')\n", current->num, current->name);
        current = current->next;
    }
}

int main(void) {
    Node* stu_list = create_node(1001, "zhang");
    insert_node(stu_list, 1002, "zhao");
    insert_node(stu_list, 1003, "li");
    print_list(stu_list);
    free_list(stu_list);
    return 0;
}
