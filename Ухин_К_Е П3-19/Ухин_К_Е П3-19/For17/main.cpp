#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Rus");

float a;
    cout<<"A:";
        cin>>a;

int n;
    cout<<"N:";
        cin>>n;


    float a2 = 1, outcom = 1;
    int i;

    for (i = 2; i <= n; ++i)
    {
        a2 *= a;
        outcom += a2;
    }
    cout<<outcom;




    return 0;
}
