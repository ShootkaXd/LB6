#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <locale>

using namespace std;

int RootsCount (double A, double B, double C);

int main ()

{
setlocale(LC_ALL, "Rus");

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  double A, B, C;
  int Num_root = 0;
  for (int i = 1; i < 4; ++i) {
    cout << "Введите число A: ";
        cin >> A;
    cout << "Введите число B: ";
        cin >> B;
    cout << "Введите число C: ";
        cin >> C;
    Num_root = RootsCount (A, B, C);
    cout << "Количество корней = " << Num_root << endl;
  }
  system ("pause");
  return 0;
}

int RootsCount(double A, double B, double C)
{
  int res;
  double D; //D Дискрименант
  res = 0;
  D = B * B -4 * A * C;

  if ( D < 0 ) {res = 0;}
    else if ( D == 0 ) {res = 1;}
        else if ( D > 0 ) {res = 2;}

  return res;
}
