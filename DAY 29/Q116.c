#include <stdio.h>

int main()
{
    char item[10][30];
    int qty[10];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Item Name: ");
        scanf("%s", item[i]);

        printf("Quantity: ");
        scanf("%d", &qty[i]);
    }

    printf("\nInventory List\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\n", item[i], qty[i]);
    }

    return 0;
}