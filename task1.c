#include <stdio.h>

int main(void) {
    int arr[] = {34, -5, 89, 12, 67, 0, 91, 23, 8, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    printf("Task 1: Разница между max и min\n");
    printf("Исходный массив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}