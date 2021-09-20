#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "student.h"

struct student
{

    char lastname[20]; // фамилия
    char firstname[20]; // имя
    char group[20]; // группа
    int year; // год родения

};



int main()
{
    setlocale(LC_ALL, "Rus");

struct student st[20];
 int n,i,s,f,count=0;

 printf("Введите количество студентов:");
 scanf("%d",&n);
 for (i=0; i<n;i++)
     {printf("Фамилия, Имя , Группа, Год рождения \n\n");
     scanf("%s%s%s%d", &st[i].lastname, &st[i].firstname, &st[i].group, &st[i].year);}
             for (i=0; i<n;i++)
             {
             printf("  Фамилия: %s  Имя: %s  Группа: %s  Год рождения: %d \n\n ", st[i].lastname, st[i].firstname, st[i].group, st[i].year);
              }



int a;

printf("Выберите действие:\n 0.Выход\n 1.Добавить студента\n 2.Сортировать по алфавиту\n 3.Найти средний возраст\n");

scanf("%d", &a);



switch(a)
{
    case 0: exit(0);

    case 1: printf("%d", dob());

    case 2: printf("%d", sort_alf());

    case 3: printf("%d", sred());


}





    return 0;
}
