#include <iostream>
// 要引用数学头文件 <cmath>
#include <cmath>
// 使用数学常数要用头文件<numbers>
#include <numbers>
using namespace std;

int main(){
    /*
    cos(double)  返回弧度角（double 型）的余弦
    sin(double)  返回弧度角（double 型）的正弦
    tan(double)  返回弧度角（double 型）的正切
    log(x)       返回参数x的自然对数
    pow(x, y)    返回 x 的 y 次方
    sqrt(x)      返回参数的平方根
    abs(int)     返回整数的绝对值
    fabs(double) 返回任意一个浮点数的绝对值
    floor(x)     返回一个小于或等于传入参数x的最大整数
    */

    // 要使用一些数学常数则要使用头文件<numbers>
    /*
    π std::numbers::pi
    e std::numbers::e
    黄金比例 φ std::numbers::phi
    */
    cout << "pi = " << std::numbers::pi << endl;
    return 0;
}
