#include <iostream>
#include <cstring>
#include <locale>
#include <stdlib.h>
#include <algorithm>
#include <ctime>

using namespace std;

template <typename T>
void Element( const T *arr,  int sr, T elem)
{int left=0, right=sr, midd;

while(1)
    {
    midd=(left = right) / 2;

    if(elem == arr(midd))
        {
        cout<<"Found:"<<arr(midd)<<"Индекс: "<<midd<<"\n\n";
        return arr(midd);
        }
        else if (elem<arr(midd))
            right=midd-1;
        else if (elem>arr(midd))
            left=midd+1;
        if (left>right)
        {
            cout<<"Not found";break;
        }

    }

}

int main()
{
    setlocale(LC_ALL,"RUS");


int iSize=14;
int dSize=14;
int cSize=14;


int iArray[iSize]={3,4,8,1,3,6,7,5,4,3,5,4,3,9};
double dArray[dSize]={3.8,4.6,8.4,1.8,3.2,6.3,7.1,5.5,4.7,3.9,5.7,4.8,3,9};
char cArray[cSize]={'h','g','d','e','w','z','c','t','-','=','r','t','f','x'};



cout<<endl<<"Данн сортированный массив  (int):"<<" ";
sort(iArray,iArray+iSize);
    for(int i=0; i<14; i++)
        {
        cout<<iArray[i]<<" ";
        }

cout<<endl<<"Данн сортированный массив (double):"<<" ";
sort(dArray,dArray+dSize);
    for(int i=0; i<14; i++)
        {
        cout<<dArray[i]<<" ";
        }

cout<<endl<<"Данн сортированный массив (char):"<<" ";
sort(cArray,cArray+cSize);
    for(int i=0; i<14; i++)
        {
        cout<<cArray[i]<<" ";
        }


cout<<endl;
system("pause");

cout<<endl<<"Ввидите нужное число (int): ";
Element(iArray, iSize);

cout<<endl<<"Ввидите нужное число (double): ";
Element(dArray, dSize);

cout<<endl<<"Ввидите нужное число (char): ";
Element(cArray, cSize);


    return 0;
}
