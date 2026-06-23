#include <stdio.h>
int main() {
    char str[100];
    int count = 1;
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }
    printf("Words = %d", count);
    return 0;
}