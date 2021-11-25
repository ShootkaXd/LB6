#include <iostream>
using namespace std;
int sumeven(int* a, int l, int r)
{
    if (r >= 6) return 0;
    if (l > r ) return 0;
    if (l >= r)
    {
        if (a[l] % 2 == 0)
        {
            return a[l];
        }
        else
        {
            return 0;
        }
    }

    int mid = (l + r) / 2;
    int s1 = sumeven(a, l, mid);
    int s2 = sumeven(a, mid + 1, r);
    return s1 + s2;

}
int main()
{
    int n=6;
    int a[6]={1,2,3,48,5,6};
    cout<<sumeven(a,0,n-1);
    return 0;
}
