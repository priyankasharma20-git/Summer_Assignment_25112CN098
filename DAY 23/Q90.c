#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if(freq[(int)str[i]] == 2) {
            printf("%c", str[i]);
            break;
        }
    }
    return 0;
}