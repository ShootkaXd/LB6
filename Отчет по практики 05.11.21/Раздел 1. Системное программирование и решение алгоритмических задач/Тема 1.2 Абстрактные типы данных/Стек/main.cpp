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

    steck[i] = a;  // ��������� � ���� �������
  }

  if (i == -1) cout << "���� ����"<<endl;  // ��������� ���� �� ���� (���)

  cout << steck[i] << " ��� ������� ������� �����"<<endl;

  cout << "������ �� ������ ������� �������"<<endl;

  i--;  // ��������� i �� ����

  system("pause");
  return 0;
}
