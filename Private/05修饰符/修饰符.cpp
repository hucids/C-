#include <iostream>
using namespace std;

int main(){
    cout << "修饰符" << endl;
    return 0;
}

/* 修饰符 一个宽泛概念 内有多个子类 互不冲突可以同时修饰一个变量
1.存储类说明符(auto, static, extern, thread_local, mutable) 控制生命周期和可见性
    static int a;
2.类型限定符(const, volatile, mutable, restrict, static) 控制读写权限和编译器优化
    const int a = 10;
3.类型修饰符(short, long, unsigned, signed, float, double, bool, char, wchar_t) 修改整数类型的长度或符号性（数据大小/范围）
    unsigned short int x;
    float num1 = 3.14f; 后缀f表示是一个float类型的字面量
4.访问修饰符(public, protected, private) 控制类成员的访问权限（面向对象）
    private: int x;
*/
