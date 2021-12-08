#include <locale>
#include <iostream>
#include <time.h>
using namespace std;

float sin_e2(float x) {
  float result = 0;
  int sign = 1;
  float xx = x * x;
  float pw = x;
  float fti = 1.0;
  for(int i = 1; i < 25; i += 2) {
    fti /= i;
    result += sign * pw * fti;
    fti /= ( i + 1 );
    sign = -sign;
    pw  *= xx;
  }
  return result;
}
