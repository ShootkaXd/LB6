#include <stdio.h>
#include <stdlib.h>

#include "student.h"

void sort_alf()
{

 for(i = 0 ; i < n - 1; i++) {
       // сравниваем два соседних элемента.
       for(j = 0 ; j < n - i - 1 ; j++) {
           if(a[j] > a[j+1]) {
              // если они идут в неправильном порядке, то
              //  меняем их местами.
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp;
           }
        }
    }

}

void dob()
{


}

void sred()
{


}



struct student
{

    char lastname[20]; // фамилия
    char firstname[20]; // имя
    char group[20]; // группа
    int year; // год родения

};



