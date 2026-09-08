#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    srand(time(NULL));
    
    int n;

    printf("Задание 1: Динамическая квадратная матрица произвольного размера\n");
    printf("Введите размер матрицы: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Ошибка: размер должен быть положительным\n");
        return 1;
    }   

    int* matrix = (int*)malloc(n * n * sizeof(int));

    if (matrix == NULL) {
        printf("Ошибка: не удалось выделить память\n");
        return 1;
    }
    
    printf("Сгенерированная матрица:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i * n + j] = rand() % 61 - 20;
            printf("%4d ", matrix[i * n + j]);
        }
        printf("\n");
    }
   
    free(matrix);
    return 0;
}