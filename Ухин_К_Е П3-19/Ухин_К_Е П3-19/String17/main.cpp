#include <iostream>
#include <locale>
#include <string>
#include <cctype>


using namespace std;



int main()
{
setlocale(LC_ALL, "Rus");
   char hello[] = "Hello World";
   char hello2[] = "Привет Мир";

   cout << "Первое значение hello: " << hello << endl;
   cout << "первое значение hello2: " << hello2 << endl;

   for (char *iter = hello; *iter != '\0'; ++iter)
   {
       *iter = std::tolower(*iter);
       ++iter;
   }

   for (char *iter = hello2; *iter != '\0'; ++iter)
   {
       *iter = std::tolower(*iter);
       ++iter;
   }

   cout << "Результат преобразования hello: " << hello << endl;
   cout << "Результат преобразования hello2: " << hello2 << endl;

   return 0;


}
