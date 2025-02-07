#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int n, arr[MAX];
void selection_sort() {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main() {
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n > MAX) {
        printf("Limit exceeded. Enter up to %d elements.\n", MAX);
        return 1;
    }
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selection_sort();
    printf("The sorted array using Selection Sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}