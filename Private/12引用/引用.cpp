#include <iostream>
using namespace std;

int vals[3] = {1, 2, 3};
// 不支持嵌套函数 即不能在main函数里定义函数 但可以在里面定义lambda函数
int& f0(int i){
        int& ref0 = vals[i];
        return ref0;
    }

int main(){
    // 引用:变量的别名
    // 引用必须在定义时初始化 且一旦绑定到一个变量后 就不能再绑定到其他变量
    int a = 10;
    int &ref = a; // 定义并初始化 对ref的操作会直接作用于a 不占用额外内存
    // int &ref 表示 ref 是一个 int 类型的引用
    ref = 20; // 访问时无需解引用操作符
    cout << a << endl;

    // 引用作为函数参数
    void func(int& x, int& y); // 好处:调用函数时能对实参产生函数内的实际影响
    // 若用void func(int x, int y); 调用时会创建一个实参的复制值 实际函数外的实参没有影响

    // 把引用作为函数返回值
    // 当函数返回一个引用时 则返回一个指向返回值的隐式指针 函数就可以放在赋值语句的左边
    f0(1) = 0;
    cout << vals[1]; // 0

    return 0;
}
