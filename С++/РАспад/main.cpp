#include <iostream>
#include <algorithm>
#include <array>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
const int  m=3, n=4;

array<array<int, n>, m> salary;

cout<<"¬ведите заработную плату рабочих: ";
for(int i=0; i<n; i++)
   for(int j=0; j<m; j++)
   {
       cin>>salary[i][j];
   }
cout<<endl;
for(int i=0; i<n; i++){
   for(int j=0; j<m; j++)
   {
       cout<<salary[i][j]<<" ";
   }
   cout<<endl;
}
cout<<endl;

int k;
cout<<"¬ведие интекс: ";
cin>>k;
int Max=0;
int i_k = 0, j_k = 0;

    if (k > 0) {
        i_k += k;
    }
    else if (k < 0) {
        j_k -= k;
    }

for ( i_k=0; i_k<n; i_k++)
    for (j_k=0; j_k<m; j_k++)
    {
    if(salary[i_k][j_k]>Max){Max=salary[i_k][j_k];}
    }

cout<<Max<<endl;

    return 0;
}
