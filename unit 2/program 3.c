//program to find out the factorial number using stack
#include<stdio.h>
#define max 50
int stack[max];
int top=1;

void push (int value)
{
    if(top==max-1)
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;
        stack[top]=value;
    }
    {
        int pop()
        {
            if (top==-1)
            {
                printf("stack")
            }
        }
    }
}
