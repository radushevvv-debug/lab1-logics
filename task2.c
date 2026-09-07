#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int arr[10];
    int n = 10;
    int i;
    
    srand(time(NULL));
    
    printf("Task 2: Инициализация массива случайными числами\n");
    
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    return 0;
}