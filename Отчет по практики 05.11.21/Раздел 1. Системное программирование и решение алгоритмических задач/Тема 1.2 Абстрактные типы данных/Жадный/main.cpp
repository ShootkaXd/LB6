#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

int main()
{
 int m[1000], sum = 0, m_size;

 cin >> m_size;
 for (int i = 0;i < m_size; i ++)
      cin >> m[i];

 sort(m, m + m_size, comp);

 for (int i = 0; i < m_size && max >= sum; i ++)
      sum += m[i];
 cout << sum << "\n";
 return 0;
}
