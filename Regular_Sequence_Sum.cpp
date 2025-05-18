//9，99，999，...，9999999999（10个9）要求使用循环结构编写程序计算此数列的和
//本题需要注意定义的数据类型问题，容易产生数据溢出从而导致计算结果错误

#include <iostream>
using namespace std;

int main() {

    // write your code here......
    long long a = 9;
    long long sum = 9;
    for(int i = 1;i < 10;i++){
        a = a * 10 + 9;
        sum += a;
    }
    cout << sum;

    return 0;
}