#include <iostream>
using namespace std;

int main(){
// 循环
    // while循环
    int a = 10;
    while(a < 20){
        cout << "a is " <<  a << endl;
        a ++;
    }
    // for循环 特定次数
    for(int b = 10; b < 20; b++){
        // 循环
        cout << "b is " << b << endl;
    }
    int my_arr[3] = {1, 2, 3};

    /* 无限循环 可按ctrl+c终止
    for(;;){
        cout << "111\n";
    }
    */

    for(int &x : my_arr){
        // 范围迭代
        x *= 2;
        cout << x << endl;
    }
    // do...while循环 至少会执行一次
    int c = 1;
    do
    {
        cout << "c is " << c << endl;
        c ++;
    } while (c > 5);

    // 循环控制语句 break continue goto b和c用法与py差不多
    /* goto用法 把控制无条件转移到同一函数内的被标记的语句 往前往后跳都可 
    一般用于深嵌套 从最内层跳至某一层或外部(这个用break会麻烦)
    goto label;
    ..
    .
    label: statement;
    */

// 判断
    // if/if...else/if...else if ...else 只能有一个else 可以有多个else if
    int d = 1;
    if(d = 0){
        cout << "d is false\n";
    }
    else if(d = 1){
        cout << "d is ture\n";
    }
    else{
        cout << "none\n";
    }
    // 可嵌套if
    // switch 基于不同条件执行不同代码块
    int day = 3;
    switch (day)
    {
    case 1:
        cout << "today is Monday\n";
        // 每个 case 语句末尾的 break 语句是必要的 用于跳出 switch 语句
        // "贯穿":如果缺少 break 程序将继续执行下一个 case
        break;
    case 3:
        cout << "today is Wednesday\n";
        break;
    default: // 所有case不匹配时使用 可以不用break
        cout << "none";
        break;
    }
    // switch可嵌套

    // ? : 运算符 条件运算符 见06

    return 0;
}
