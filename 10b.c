#include <stdio.h>
#define SIZE 10
int arr[SIZE], n;
void insertionSort() {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int i;
    printf("Enter the number of elements (max %d): ", SIZE);
    scanf("%d", &n);
    if (n > SIZE || n <= 0) {
        printf("Invalid input! Enter a number between 1 and %d.\n", SIZE);
        return 1;
    }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort();
    printf("The array after Insertion Sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}