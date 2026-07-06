#include <iostream>  // 引入vs自带的标准库头文件 还有许多其他的标准库头文件
using namespace std;  // 使用std命名空间
/* c++ 标准库内所有东西都定义在std命名空间内 若不写上一行则必须每次加上std::前缀(std::cout << "Hello World!\n";)*/

int main()  // main()程序开始执行的窗口
{
    cout << "Hello World!\n"; // 不用加前缀std::
    // 还可以写成 cout << "Hello World!" << endl; endl作用为换行
    return 0;
}
// 按下ctrl + F5 运行文件
// 在 VS 中编译，去 x64\Debug\ 目录下找 Project1.exe 来运行；在 cmd 中编译，就用 .\a.exe 来运行。

// c++标识符:来表示自定义项目(变量 类 模块等)的名称 大小写字母或_开始 后可跟字母，数字，_下划线 不能出现标点字符
// c++关键字 不能作为标识符名称
/* 头文件(.h)放声明 接口 类型定义 项目大(含多个cpp文件时)需要手动添加自己的.h文件
   源文件(.cpp)放函数定义及实现 main
               有时为了使读者第一时间看到程序入口(main) 会把函数定义放在main下面(但前提是main上面要提前声明函数 因为程序编译时自上而下执行)
*/
// 一个project项目里只能有一个cpp文件里含有main函数 启动器选择不同的项目会运行不同项目内的exe文件