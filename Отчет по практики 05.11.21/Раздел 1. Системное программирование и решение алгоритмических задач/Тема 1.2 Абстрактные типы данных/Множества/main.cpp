#include <iostream>
#include <set>

using namespace std;

set <int> a;
set <int> b;
set <int> c;

int main()
{
    a.insert(1);
    a.insert(2);


    cout << a.size() << endl;


    b.insert(2);
    b.insert(3);


    cout << b.size() << endl;


    c.insert(a.begin(), a.end());
    c.insert(b.begin(), b.end());


    cout << c.size() << endl;


    return 0;
}
