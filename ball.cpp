//一球从 h 米高度自由落下，每次落地后反跳回原高度的一半再落下，求它在第 n 次落地时共经过了多少米？第 n 次返弹多高？
//输入小球下落的高度和落地的次数（先输入小球初始高度再输入反弹次数）
//输出小球第 n 次 落地时经过的距离和第 n 次反弹的高度（保留小数点后1位）
//思路：等比数列求和，然后把得到的结果乘2再减去一个初始高度即总距离

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // 下落的高度和落地的次数
    double h;
    int n;

    cin >> h;
    cin >> n;
    
    // write your code here......
    double h0 = h;
    double distance = 0;
    for(;n > 0;n--){
        distance += h;
        h /= 2;
    }
    distance *= 2;
    distance -= h0;
    cout << fixed << setprecision(1) << distance <<" ";
    cout << fixed << setprecision(1) << h;
    return 0;
}