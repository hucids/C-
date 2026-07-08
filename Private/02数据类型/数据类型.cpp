// 第一步 数据类型(内置基石 能直接使用且无需任何前缀)
/* 基本数据类型
   整数类型：int, short, long, long long
   浮点类型：float double, long double
   字符类型：char, wchar_t, char8_t(C++20), char16_t, char32_t
   布尔类型：bool
   空类型：void
*/
// 基本类型可以用一个或多个类型修饰符修饰 具体见05
// signed(有符号-默认), unsigned(无符号), short(短整型), long(长整型), const(常量 不可修改), volatile(易变的), mutable(可变的), static(静态的), extern(外部的), register(寄存器的)
signed int a = -1; // 有符号整型
unsigned int b = 2; // 无符号整型
/* 派生数据类型
   指针类型：int*, char*, double* 等 int* ptr = &x;
   引用类型：int&, char&, double& 等 int& ref = x; 此时ref和x指向同一个内存地址 修改ref也会修改x 修改x也会修改ref
   数组类型：int[], char[], double[] 等 int arr[5] = {1, 2, 3, 4, 5};
   函数类型：int(), void(), double() 等 int func(int x) { return x * 2; }
   枚举类型：enum Color { RED, GREEN, BLUE }; Color c = RED; 用于一个变量可以取有限个值的情况
   类类型：class MyClass { ... }; MyClass obj;
   结构体类型：struct MyStruct { ... }; MyStruct s;
   联合类型：union MyUnion { ... }; MyUnion u;
*/
// 类型别名
typedef int Integer;
typedef double Double;
Integer x = 10; // 此处合法
// 类型转换(type casting) 通过类型转换可以将一个数据类型的值转换为另一个数据类型的值
// 四种类型转换运算符：static_cast(静态转换), dynamic_cast(动态转换), const_cast(常量转换), reinterpret_cast(重新解释转换)
int y = static_cast<int>(3.14); // 静态转换 将浮点数3.14转换为整数3 强制+类型相似对象转换
int* p = new int(10); char* cp = reinterpret_cast<char*>(p);  // 重新解释转换 将int*类型的指针p转换为char*类型的指针cp 强制+类型不相似对象转换 什么都能转
const int c = 10; int& ref = const_cast<int&>(c);// 常量转换 只能用于指针或引用类型的转换 此时ref=10 且可修改



// 第二步 标准库(STL) 存放在std命名空间内的头文件 需要通过#include搬进来使用
#include <iostream> // iostream 内含cin cout 不负责字符串、数组、文件
#include <Windows.h>
/*
容器（装数据的盒子）：vector（动态数组）, string（字符串）, map（字典）, list（链表）等）
输入输出（与外界交互）：cin（读入）, cout（输出）, fstream（文件读写）等）
算法（处理数据的函数）：sort（排序）, find（查找）, reverse（翻转）等）
数学工具：sqrt（开方）, pow（幂运算）等（在 <cmath> 里）
*/
using namespace std;  // 使用标准库时 可用 std:: 或 using namespace std;

/* 关键字:
   1.基本数据类型（int, float, char, bool 等）以及部分派生数据类型的声明词（class, struct, union, enum）
   2.控制语句（if, else, switch, case, for, while, do 等）
   3.存储类型说明符（auto, register, static, extern, mutable 等）
   4.函数说明符（inline, virtual, explicit 等）
   5.访问说明符（public, protected, private）
   6.其他（typedef, namespace, using, template, try, catch 等）
   7.类型修饰符(见上)
   8.异常处理（throw, try, catch）
   9.类型转换（dynamic_cast, static_cast, reinterpret_cast, const_cast）
   10.其他（new, delete, this, operator, sizeof, typeid, alignas, alignof, noexcept 等）
   11. C++20 新增关键字（concept, requires, co_await, co_yield, co_return 等）
   关键字不能作为标识符名称（变量、函数、类等的名字），否则会引发编译错误。
标准库组件 (如 vector, cin, cout)属于外部 不是关键字 因此可以当变量名函数名等 但一般不这样做
 */

int main() {
   // 把控制台输出代码页设为 UTF-8 (65001)
    SetConsoleOutputCP(CP_UTF8);
    // 同时设置输入代码页，这样读取中文输入也不会乱码
    SetConsoleCP(CP_UTF8);
	cout << "数据类型\n";
	return 0;
}

// 选择数据类型
/* 有小数 double(精度15-16位 默认) float(精度6-7位)
   无小数--> 整数 int(4字节 -21亿-21亿 默认)
                 long(4/8字节 视平台)
                 long long(8字节 -9.22e18 ~ 9.22e18)
                 int64_t(同long long)
                 short(2字节 -32768 ~ 32767)
               --> 正数 加unsigned前缀
*/
