#include <stdio.h>

int main()
{
    int roll[20], marks[20], n = 0, ch, i, r;
    char name[20][30];

    do
    {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &roll[n]);

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                break;

            case 2:
                printf("\nStudent Records\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
                }
                break;

            case 3:
                printf("Enter Roll No to Search: ");
                scanf("%d", &r);

                for(i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        printf("\nRecord Found\n");
                        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
                    }
                }
                break;

            case 4:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(ch != 4);

    return 0;
}