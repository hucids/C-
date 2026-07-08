#include <iostream>
using namespace std;
// 常量(字面量) 固定值 不能修改 且可以为任何的基本数据类型
/*
1.整数常量 可带前缀(0x/0X 十六进制, 0 八进制, 没有 十进制)和后缀(U/u 无符号undesigned, L/l 长整数long)
2.浮点常量 小数形式/指数形式 ps:3.14/314e-2/314e-2L
3.布尔常量 两个(ture false)
4.字符常量 用单引号 宽字符常量(L'x')必须存储在 wchar_t 类型的变量中 窄字符常量('x')可以存储在 char 类型的简单变量中
          一些特定的字符，前面有反斜杠时，具有特殊的含义(\\ -> \, \' => ', \n换行符, \t水平制表符, \v垂直制表符 )
5.字符串常量 用双引号 可用\做分隔符进行分行 但输出不变 主要好看
*/

/* 定义一个常量 
1.#define预处理器 #define identifier value;
2.const关键字 const type variable = value;
*/
// 定义一个十六进制的整数常量INT
#define TNT0 0xfe;
const int INT = 0xfe; // 用const可以声明指定类型的常量

int main(){
    cout << "常量" << endl;
    return 0;
}
