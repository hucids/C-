#include <iostream>
using namespace std;
// I/O操作 发生在流中 
// 字节流是从设备（如键盘、磁盘驱动器、网络连接等）流向内存 输入操作(I)
// 字节流是从内存流向设备（如显示屏、打印机、磁盘驱动器、网络连接等） 输出操作(O)
// I/O库头文件
/*
<iostream> 定义了 cin(标准输入流) cout(标准输出流) cerr(非缓冲标准错误流) clog(缓冲标准错误流) 对象
<iomanip> 声明对执行标准化 I/O 有用的服务
<fstream> 为用户控制的文件处理声明服务
*/

int main(){
    // <iostream> cout+<<(流插入运算符) cin+>>(流提取运算符)
    // cerr+<< 非缓冲 每个流插入到 cerr 都会立即输出 用于显示错误信息
    // clog+<< 缓冲 每个流插入到 clog 都会先存储在缓冲区 直到缓冲填满或者缓冲区刷新时才会输出
    char name[50];
    cout << "your name: ";
    cin >> name; // 提取的值存储在给定的变量中
    cout << "your name is " << name << endl;

    return 0;
}
