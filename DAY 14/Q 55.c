#include <stdio.h>
int main() {
    int arr[100], n;
    int largest, secondLargest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }
    secondLargest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > secondLargest && arr[i] < largest)
            secondLargest = arr[i];
    }
    printf("Second Largest Element = %d", secondLargest);
    return 0;
}