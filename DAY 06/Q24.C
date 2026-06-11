#include <stdio.h>
int main() {
    int x, n;
    long  result = 1;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result = result * x;
    }
    printf("%ld", result);
    return 0;
}