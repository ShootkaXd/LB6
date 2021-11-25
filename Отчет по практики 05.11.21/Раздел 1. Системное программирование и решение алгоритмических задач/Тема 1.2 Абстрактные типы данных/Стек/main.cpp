#include <iostream>
#include <locale>


using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
  int steck[20];
  int i = -1;

  for (int j = 0; j < 6; j++) {
    int a;

    cin >> a;

    i++;

    steck[i] = a;  // добавляем в стек элемент
  }

  if (i == -1) cout << "Стек пуст"<<endl;  // проверяем пуст ли стек (нет)

  cout << steck[i] << " это верхний элемент стека"<<endl;

  cout << "Сейчас мы удалим верхний элемент"<<endl;

  i--;  // уменьшаем i на один

  system("pause");
  return 0;
}
