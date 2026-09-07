#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int arr[] = {34, -5, 89, 12, 67, 0, 91, 23, 8, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int max, min, diff;
    
    printf("Task 1: Разница между max и min\n");
    printf("Исходный массив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    max = arr[0];
    min = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    diff = max - min;
    
    printf("Максимальный элемент: %d\n", max);
    printf("Минимальный элемент: %d\n", min);
    printf("Разница (max - min): %d\n", diff);
    
    return 0;
}