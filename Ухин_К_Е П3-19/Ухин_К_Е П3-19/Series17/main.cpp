#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
int n;
float b, r = 1.0;

cout<<"������� ����� N: ";
    cin>>n;
cout<<"������� ����� B: ";
    cin>>b;
int  f = 1;

    for (int i = 1; i <= n; ++i) {
        cout << ">";
            cin >> r;
    cout << b <<"-"<< r<<endl;
    }


return 0;
}
