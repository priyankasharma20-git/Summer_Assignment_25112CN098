#include <stdio.h>
int main() {
    int arr[100], n,sum;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter required sum: ");
    scanf("%d", &sum);
    printf("Pairs are:\n");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum)
                printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }
    return 0;
}