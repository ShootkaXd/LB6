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
//Колличество актеров на фильм
int actor;

int film_set()
{
cout<<"Введите режиссера: ";
    cin>>producer;
cout<<endl;
cout<<"Введите название фильма:";
    cin>>name_film;
cout<<endl;
cout<<"Введите длительность фильма в минутах: ";
    cin>>time_film;
cout<<endl;
cout<<"Введите кол-во актеров: ";
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
cout<<"Стоимость фильма ровна: "<<price_film<<"$"<<endl;
return price_film;
cout<<endl;
}

void info()
{
    cout<<"Режиссер: "<<producer<<endl;
    cout<<"Название фильма: "<<name_film<<endl;
    cout<<"Длительность фильма: "<<time_film<<" Мин"<<endl;
    cout<<"Стоимость фильма ровна: "<<price_film<<"$"<<endl;
}

private:
int price_film;

};



class Cartoon : public FilmClass
{
public:
void cartoon_set()
{
cout<<"Введите режиссера: ";
    cin>>producer;
cout<<endl;
cout<<"Введите название мультфильма:";
    cin>>name_film;
cout<<endl;
cout<<"Введите длительность мультфильма в минутах: ";
    cin>>time_film;
cout<<endl;
cout<<"Введите кол-во актеров: ";
    cin>>actor;
cout<<endl;
}

int price()
{
time_film*=25;
actor*=10;
price_cartoon=time_film+actor;
cout<<"Стоимость мультфильма ровна: "<<price_cartoon<<"$"<<endl;
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
cout<<"Информация по фильму: "<<endl;
obj.info();

cout<<endl;
cout<<"Мультфильм"<<endl;

obj1.cartoon_set();

obj1.price();



    return 0;
}
