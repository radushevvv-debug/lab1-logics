#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n;
    int *arr;
    
    printf("Task 3: Динамический массив произвольного размера\n");
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Ошибка: не удалось выделить память\n");
        return 1;
    }
    
    printf("Память выделена: %d элементов\n", n);

    return 0;
}