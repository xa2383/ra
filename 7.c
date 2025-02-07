#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* head = NULL;
void insertFront(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void deleteFront() {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}
void display() {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice, value;
    do {
        printf("1. Insert at Front\n2. Delete from Front\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                deleteFront();
                break;
            case 3:
                display();
                break;
        }
    } while (choice != 4);
    return 0;
}