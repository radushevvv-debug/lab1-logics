#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n;
    int *arr;
    int i;
    
    printf("Task 3: Динамический массив произвольного размера\n");
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Ошибка: не удалось выделить память\n");
        return 1;
    }
    
    printf("Введите %d элементов массива:\n", n);
    for (i = 0; i < n; i++) {
        printf("Элемент [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Введенный массив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}