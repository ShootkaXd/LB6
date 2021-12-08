#include <iostream>
#include <string>
#include <string>
#include <string>
#include <string>

ifstream FIL;
ofstream FUL;

class Group {
private:
    int Kolgrup;
    string namber;
    int kolrab;
    vector<pair<string,int> rab;
    vector<pair<string,int>:iterator it;
    public:


};


int main() {
    int N, x, count;
    std::cin >> N;
    Group* g_arr = new Group[N];
    Worker* w_arr = new Worker[x];
    bool found;
    for (int i = 0; i < N; i++) {
        g_arr[i].cinAndSetGroup();
        std::cin >> x;
        count = 0;

        for (int j = 0; j < x; j++) {
            w_arr[j].cinAndSetWorker();
            if (w_arr[j].getYear() > 1974) {
                count++;
            }
        }
      if (count == x) {      // tut polnaya laja(( a esli vivesti za cikl, teryaetsya x
        found = true;
        std::cout << g_arr[i].getGroupName() << "\n";
      }
    }

    if(!found){
        std::cout << "Not found!";
    }

    delete [] w_arr;
    delete [] g_arr;
}
