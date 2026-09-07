#include <stdio.h>
#include <string.h>
#include <windows.h>

struct student {
    char famil[20];
    char name[20];
    char facult[20];
    int Nomzach;
};

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    struct student stud[3];
    int i;
    
    printf("Task 5: Поиск структуры student по параметрам\n");
    
    for (i = 0; i < 3; i++) {
        printf("\nСтудент %d\n", i + 1);
        printf("Фамилия: ");
        scanf("%s", stud[i].famil);
        printf("Имя: ");
        scanf("%s", stud[i].name);
        printf("Факультет: ");
        scanf("%s", stud[i].facult);
        printf("Номер зачетки: ");
        scanf("%d", &stud[i].Nomzach);
    }
    
    printf("\nВведено 3 студента.\n");
    
    return 0;
}