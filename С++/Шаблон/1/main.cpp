#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

template <typename T>
void Element( const T *arr,  int size, T num)
{
    int k;
for(int  i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            cout<<"������� ������"<<endl; break;
            cout<<"������� ������"<<endl; break;

            //k++;
        }
        //else cout<<"������� �� ������"; break;
    }
}


int main()
{
    setlocale(LC_ALL,"RUS");


int iSize=14;
int dSize=14;
int cSize=14;
int iNum;
double dNum;
char cNum;

int iArray[iSize]={3,4,8,1,3,6,7,5,4,3,5,4,3,9};
double dArray[dSize]={3.8,4.6,8.4,1.8,3.2,6.3,7.1,5.5,4.7,3.9,5.7,4.8,3,9};
char cArray[cSize]={'h','g','d','e','w','z','c','t','-','=','r','t','f','x'};



cout<<endl<<"���� ������ (int):"<<" ";
    for(int i=0; i<14; i++)
        {
        cout<<iArray[i]<<" ";
        }

cout<<endl<<"���� ������ (double):"<<" ";
    for(int i=0; i<14; i++)
        {
        cout<<dArray[i]<<" ";
        }

cout<<endl<<"���� ������ (char):"<<" ";
    for(int i=0; i<14; i++)
        {
        cout<<cArray[i]<<" ";
        }


cout<<endl;
system("pause");

cout<<endl<<"������� ������ ����� (int): ";
cin>>iNum;
Element(iArray, iSize, iNum);

cout<<endl<<"������� ������ ����� (double): ";
cin>>dNum;
Element(dArray, dSize, dNum);

cout<<endl<<"������� ������ ����� (char): ";
cin>>cNum;
Element(cArray, cSize, cNum);


    return 0;
}
