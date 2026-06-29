#include <stdio.h>
struct Contact {
    char name[30];
    long long mobile;
};
int main() {
    struct Contact c[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("\nEnter Contact %d Details\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Mobile Number: ");
        scanf("%lld", &c[i].mobile);
    }
    printf("\n--- Contact List ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name   : %s\n", c[i].name);
        printf("Mobile : %lld\n", c[i].mobile);
    }
    return 0;
}