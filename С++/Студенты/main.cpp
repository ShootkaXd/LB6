#include <iostream>
#include <locale>
#include <class>
#include <string>
#include <vector>

using namespace std;

{
class student
{
private:
    string name;
    string grupa;
    vector<int> otmetki;
public:
    void vod
{
    cout<<"Введите имя учиника:";
    cin>>name;
    cout<<endl;
    cout<<"Введите группу:";
    cin>>grupa;
    cout<<endl;
    cout<<"Введите оценки:"
    for(int i=0;i<3;i++)
    {
        int n;
        cin>>n;
        otmetki.push_back(n);
    }
}
    void print
    {
        cout<<name;
        cout<<grupa;
        for(int i = 0; i < otmetki.size(); i++)
        cout << otmetki[i] << ' ';
    }
};

int main()
{










return 0;
}
