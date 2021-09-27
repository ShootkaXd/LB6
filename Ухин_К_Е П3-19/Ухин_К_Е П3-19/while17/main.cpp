#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
int n;
    cout << "N:";
        cin >> n;

    while (n > 0) {
        cout<< n % 10;
        n /= 10;
    }


 return 0;
}
