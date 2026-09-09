//  квадратная матрицу спрашиваем у пользователя какую
//  заполняем элементами в пределах от -20 до 40 и считаем сумму всх элементов находящихся выше главной диагонали

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    srand(time(NULL));
    
    int n;
    int sum = 0;

    printf("Задание 1: Динамическая квадратная матрица произвольного размера\n");
    printf("Введите размер матрицы: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Ошибка: размер должен быть положительным\n");
        return 1;
    }   

    int **matrix = (int**)malloc(n * sizeof(int*));

    if (matrix == NULL) {
        printf("Ошибка: не удалось выделить память\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        
        if (matrix[i] == NULL){
            printf("Ошибка: не удалось выделить память\n");


        for (int k = 0; k < i; k++) {
        free(matrix[k]);
        }

        free(matrix);
        return 1;
    } 
}   

    printf("Сгенерированная матрица:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 61 - 20;
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nЭлементы выше главной диагонали:\n");

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
                printf("%4d ", matrix[i][j]);
                sum += matrix[i][j];
        }
    }

    printf("\n\nСумма элементов выше главной диагонали: %d\n", sum);

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}