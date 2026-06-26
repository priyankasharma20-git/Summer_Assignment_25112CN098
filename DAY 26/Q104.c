#include <stdio.h>
int main() {
    int ans, score = 0;
    printf("Q1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Kolkata  4.Chennai\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;
    printf("Q2. 5 + 3 = ?\n");
    printf("1.6  2.7  3.8  4.9\n");
    scanf("%d", &ans);
    if(ans == 3)
        score++;
    printf("Q3. C language developed by?\n");
    printf("1.Dennis Ritchie  2.James Gosling  3.Bjarne Stroustrup  4.Guido\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;
    printf("Your Score = %d/3\n", score);
    return 0;
}