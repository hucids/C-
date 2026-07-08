#include <iostream>
using namespace std;
// 函数声明 告诉编译器函数的名称 返回类型 参数  直接定义则可不用声明
int func(int num1, int num2); // num1 num2为形式参数(此处为以传值方式传入) 可指定默认值 未传递参数值则用默认值

int main(){
    int a = 10, b = 20;
    int ret;
    ret = func(a, b); // 调用函数 传值调用
    // 调用函数时 向函数传参方式: 传值调用 指针调用 引用调用
    cout << "result is " << ret << endl;

    // Lambda函数 [capture](parameters) -> return_type { body }

    return 0;
}

// 函数定义 提供了函数的实际主体
int func(int num1, int num2){
    int result;
    result = num1 + num2;
    return result;
}
