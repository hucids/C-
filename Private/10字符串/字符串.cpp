#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    // 两种类型表示字符串
    // C风格字符串
    // 字符串实际上是使用 null 字符 \0 终止的一维字符数组
    char site[] = "RUNOOB"; // 或char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'}; \0可写可不写
    // 该字符数组实际大小比RUNOOB多一个

    // C++的string类型字符串 #include <string>
    // 支持这里的所有操作外 还有其他更多功能 详见后面
    string str1 = "runoob";

    // 用来操作以 null 结尾的字符串的函数 #include <cstring>
    /*
    strcpy(s1, s2); 复制字符串 s2 到字符串 s1
    strcat(s1, s2); 连接字符串 s2 到字符串 s1 的末尾 连接字符串也可以用 + 号(s1 + s2)
    strlen(s1); 返回字符串 s1 的长度
    strcmp(s1, s2); 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
    strchr(s1, ch); 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置
    strstr(s1, s2); 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置
    */
    return 0;
}
