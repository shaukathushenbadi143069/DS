#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void Enter value()
{
    int value;

    if(rear == SIZE - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("Element inserted\n");
    }
}

void Delete value()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted element = %d\n", queue[front]);
        front++;

        if(front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements:\n");

        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enter Value\n");
        printf("2. Delete Value\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                Enter value();
                break;

            case 2:
                Delete value();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}
