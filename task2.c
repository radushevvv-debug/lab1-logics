#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int arr[10];
    int n = 10;
    int i;
    
    srand(time(NULL));
    
    printf("Task 2: Инициализация массива случайными числами\n");
    
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    
    printf("Массив случайных чисел: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}