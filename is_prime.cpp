//输入一个大于 1 的整数，判断其是不是质数, 时间限制：1秒  空间限制：256M


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int input;
    cin >> input;
    bool prime = true;
    for (int i = 2, lim = sqrt(input); i <= lim; ++i) {
        if (input % i == 0) {
            prime = false;
            break;
        }
    }
    cout << (prime ? "是质数" : "不是质数");
    return 0;
}
