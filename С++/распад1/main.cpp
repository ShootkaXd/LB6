#include <iostream>
#include <array>
#include <algorithm>
#include <locale>


using namespace std;

int main() {
    const int n=4, m=4;
array<array<int, n>, m> Arr;


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            Arr[i][j]=rand()%10;
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }

int k;
cin>>k;

int i_k = 0, j_k = 0;

    if (k > 0) {
        i_k += k;
    }
    else if (k < 0) {
        j_k -= k;
    }

for (int i = i_k, j = j_k; i < n && j < n; ++i, ++j) {
    cout << Arr[i][j] << ' ';
    }

    return 0;
}
