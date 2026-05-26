#include <stdio.h>
int main() {
    int N;
    int sum;
    printf("Enter a number: ");
    scanf("%d", &N);
    sum = N * (N + 1) / 2;
    printf("Sum of natural numbers = %d", sum);
    return 0;
}