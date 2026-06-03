#include <stdio.h>

int main() {
    int num,Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        Prime = 0;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime)
        printf("%d is a Prime Number.", num);
    else
        printf("%d is Not a Prime Number.", num);
    return 0;
}
