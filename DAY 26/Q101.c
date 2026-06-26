#include <stdio.h>
int main() {
    int num, guess;
    printf("Enter the secret number: ");
    scanf("%d", &num);
    do {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if(guess > num)
            printf("Too High!\n");
        else if(guess < num)
            printf("Too Low!\n");
        else
            printf("Correct Guess!\n");
    } while(guess != num);
    return 0;
}