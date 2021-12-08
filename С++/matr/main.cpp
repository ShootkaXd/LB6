#include <iostream>
#include <locale>

using namespace std;

int main()
{
 const int n=5;
 int a[n][n];

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         if(i<j && i<n-1-j) a[n][n]=1;
         else if(i<j && i>n-1-j) a[n][n]=3;
         else a[n][n]=0;
         if(i!=j && i==n-1-j) a[n][n]=2;
         cout<<a[n][n]<<" ";
     }
     cout<<"\n";
 }
 system("pause");
 return 0;
}
