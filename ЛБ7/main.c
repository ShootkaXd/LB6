#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "student.h"

struct student
{

    char lastname[20]; // �������
    char firstname[20]; // ���
    char group[20]; // ������
    int year; // ��� �������

};



int main()
{
    setlocale(LC_ALL, "Rus");

struct student st[20];
 int n,i,s,f,count=0;

 printf("������� ���������� ���������:");
 scanf("%d",&n);
 for (i=0; i<n;i++)
     {printf("�������, ��� , ������, ��� �������� \n\n");
     scanf("%s%s%s%d", &st[i].lastname, &st[i].firstname, &st[i].group, &st[i].year);}
             for (i=0; i<n;i++)
             {
             printf("  �������: %s  ���: %s  ������: %s  ��� ��������: %d \n\n ", st[i].lastname, st[i].firstname, st[i].group, st[i].year);
              }



int a;

printf("�������� ��������:\n 0.�����\n 1.�������� ��������\n 2.����������� �� ��������\n 3.����� ������� �������\n");

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
