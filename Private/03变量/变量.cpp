#include <iostream>
#include <Windows.h>
using namespace std;

extern int a; // 声明一个外部变量a 该变量在其他文件中定义 用extern关键字声明的变量在当前文件中不会分配内存空间 只能在其他文件中定义并初始化
int b = 1, c = 2; // 定义并初始化变量b和c
int d; // 定义变量d 但未初始化 其值为随机值

// 对比函数声明 不用extern关键字声明函数 因为函数在编译时会被编译器自动识别为外部函数
int func(); // 声明一个函数func() 函数定义在后面时一定要先声明函数 定义在前面则不用
// 此处int表示函数func()返回值类型为int类型 若函数没有返回值则用void表示

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i = func(); // 调用函数func() 并将其返回值赋给变量i
}

// 函数定义
int func(){
    cout << "变量" << endl;
    return 0;
}

// 定义变量: 局部变量 形式参数 全局变量
// 当局部变量被定义时，系统不会对其初始化，必须自行对其初始化。
// 定义全局变量时，系统会自动初始化(int 0, float 0.0, char '\0', bool false, 指针 nullptr, pointer null)

// 变量的作用域: 局部作用域 全局作用域 块作用域 类作用域
