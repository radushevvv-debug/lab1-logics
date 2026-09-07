#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3;
    int cols = 4;
    int i, j;
    int sum;
    
    printf("Task 4: Сумма элементов в столбцах\n");
    printf("Двумерный массив:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nСуммы по столбцам:\n");
    for (j = 0; j < cols; j++) {
        sum = 0;
        for (i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        printf("Столбец [%d]: %d\n", j, sum);
    }
    
    return 0;
}