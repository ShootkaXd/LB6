#include <iostream>
#include <locale>
#include <string>
#include <cctype>


using namespace std;



int main()
{
setlocale(LC_ALL, "Rus");
   char hello[] = "Hello World";
   char hello2[] = "������ ���";

   cout << "������ �������� hello: " << hello << endl;
   cout << "������ �������� hello2: " << hello2 << endl;

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

   cout << "��������� �������������� hello: " << hello << endl;
   cout << "��������� �������������� hello2: " << hello2 << endl;

   return 0;


}
