#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale(LC_ALL, "Rus");
int a, b, c;
    cout << "����o_A:";
        cin >> a;
    cout << "����o_B:";
        cin >> b;
    cout << "����o_C:";
        cin >> c;

 if  ((a <= b) & (b <= c) || (a >= b) & (b >= c)) {
 a = a * 2;
 b = b * 2;
 c = c * 2;
 cout << "A:" << a << ' ' << "B:" << b << ' ' << "C:" << c;
 }
 else {
    a = a * (-1);
    b = b * (-1);
    c = c * (-1);
    cout << "A:" << a << ' ' << "B:" << b << ' ' << "C:" << c;
}


    return 0;
}
