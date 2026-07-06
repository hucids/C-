// 第一步 基本数据类型(内置基石 能直接使用且无需任何前缀)
/*
   整数类型：int, short, long, long long
   浮点类型：float double, long double
   字符类型：char, wchar_t, char8_t(C++20), char16_t, char32_t
   布尔类型：bool
   空类型：void
*/

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

int main() {
   // 把控制台输出代码页设为 UTF-8 (65001)
    SetConsoleOutputCP(CP_UTF8);
    // 同时设置输入代码页，这样读取中文输入也不会乱码
    SetConsoleCP(CP_UTF8);
	cout << "数据结构\n";
	return 0;
}