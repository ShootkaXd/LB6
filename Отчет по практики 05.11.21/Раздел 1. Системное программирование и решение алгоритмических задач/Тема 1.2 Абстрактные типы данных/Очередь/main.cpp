#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue <long long> nums;
    long long n;
    cin >> n;
    long long number = 0;
    for (int i = 0; i < n; i++) {
        cin >> number;
        nums.push(-number);
    }
    long long min_sum = 0;
    long long a = 0;
    long long b = 0;
    while ( !nums.empty() )
    {
        a = nums.top();
        nums.pop();
        if (nums.empty()) break;
        b = nums.top();
        nums.pop();
        min_sum -= a+b;
        nums.emplace(a+b);

    }
    cout << " " << min_sum;
    return 0;
}
