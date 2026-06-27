#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage  = %.2f%%", percentage);
    if(percentage >= 90)
        printf("\nGrade A+");
    else if(percentage >= 75)
        printf("\nGrade A");
    else if(percentage >= 60)
        printf("\nGrade B");
    else if(percentage >= 40)
        printf("\nGrade C");
    else
        printf("\nFail");
    return 0;
}