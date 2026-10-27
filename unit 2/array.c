#include <stdio.h>

int main()
{
    int a[10], i, search, found = 0;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == search)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found\n");

    return 0;
}
