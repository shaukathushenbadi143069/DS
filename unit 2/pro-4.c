#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp, *newNode;
    int n, i, value;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter value: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
        {
            temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    temp = head;

    while (temp != NULL)
    {
        if (temp->data > largest)
        {
            secondLargest = largest;
            largest = temp->data;
        }
        else if (temp->data > secondLargest && temp->data != largest)
        {
            secondLargest = temp->data;
        }

        temp = temp->next;
    }

    printf("Largest element = %d\n", largest);

    if (secondLargest == INT_MIN)
        printf("Second largest element does not exist\n");
    else
        printf("Second largest element = %d\n", secondLargest);

    return 0;
}
