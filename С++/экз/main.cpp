#include <iostream>
#include <locale>
#include <string>
#include <sstream>

using namespace std;

class FilmClass
{
public:
string name_film;
string producer;
int time_film;
//����������� ������� �� �����
int actor;

int film_set()
{
cout<<"������� ���������: ";
    cin>>producer;
cout<<endl;
cout<<"������� �������� ������:";
    cin>>name_film;
cout<<endl;
cout<<"������� ������������ ������ � �������: ";
    cin>>time_film;
cout<<endl;
cout<<"������� ���-�� �������: ";
    cin>>actor;
cout<<endl;
}

int price()
{
    string l="Spilberg";
time_film*=20;
actor*=30;
if(producer!=l){price_film=time_film+actor;}
else (price_film=(time_film+actor)*2);
cout<<"��������� ������ �����: "<<price_film<<"$"<<endl;
return price_film;
cout<<endl;
}

void info()
{
    cout<<"��������: "<<producer<<endl;
    cout<<"�������� ������: "<<name_film<<endl;
    cout<<"������������ ������: "<<time_film<<" ���"<<endl;
    cout<<"��������� ������ �����: "<<price_film<<"$"<<endl;
}

private:
int price_film;

};



class Cartoon : public FilmClass
{
public:
void cartoon_set()
{
cout<<"������� ���������: ";
    cin>>producer;
cout<<endl;
cout<<"������� �������� �����������:";
    cin>>name_film;
cout<<endl;
cout<<"������� ������������ ����������� � �������: ";
    cin>>time_film;
cout<<endl;
cout<<"������� ���-�� �������: ";
    cin>>actor;
cout<<endl;
}

int price()
{
time_film*=25;
actor*=10;
price_cartoon=time_film+actor;
cout<<"��������� ����������� �����: "<<price_cartoon<<"$"<<endl;
return price_cartoon;
cout<<endl;
}


private:
int price_cartoon;

};






int main()
{


setlocale(LC_ALL,"Rus");

FilmClass obj;
Cartoon obj1;

obj.film_set();

obj.price();
cout<<endl;

system("pause");

cout<<endl;
cout<<"���������� �� ������: "<<endl;
obj.info();

cout<<endl;
cout<<"����������"<<endl;

obj1.cartoon_set();

obj1.price();



    return 0;
}
