//WAP to create and display linklist:


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int data, i;

    if (n <= 0) return NULL;

    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) exit(1);

    printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    return head;
}

void displayList(struct Node* head) {
    struct Node* temp = head;

    if (head == NULL) {
        printf("\nThe list is empty.\n");
        return;
    }

    printf("\nLinked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head = createList(n);
    displayList(head);

    return 0;
}
