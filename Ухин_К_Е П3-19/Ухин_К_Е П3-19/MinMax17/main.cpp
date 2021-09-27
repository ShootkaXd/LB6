#include <iostream>
#include <locale>


using namespace std;


int main()
{
setlocale(LC_ALL, "RUS");

 int n,maxnum,r,max;

cout<<"¬ведите число n: ";
    cin>>n;

for (int i=1; i<=n; ++i){
    cout<<"¬ведите число r: ";
        cin>>r;

        if ((r>=max)||(i==1)){
            max=r;
            maxnum=i;
        }
    }
    cout<<n-maxnum;

    return 0;
}
