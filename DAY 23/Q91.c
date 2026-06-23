#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, found;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    while(str1[len1] != '\0')
        len1++;
    while(str2[len2] != '\0')
        len2++;
    if(len1 != len2) {
        printf("Not Anagram");
        return 0;
    }
    for(int i = 0; i < len1; i++) {
        found = 0;
        for(int j = 0; j < len2; j++) {
            if(str1[i] == str2[j]) {
                str2[j] = '*';   // mark as used
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}