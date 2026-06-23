#include <stdio.h>
int main() {
    char str[100];
    int flag;
    printf("Enter string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        flag = 0;
        for(int j = 0; str[j] != '\0'; j++) {
            if(i != j && str[i] == str[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("First Non-Repeating Character: %c", str[i]);
            return 0;
        }
    }
    printf("No Non-Repeating Character");
    return 0;
}