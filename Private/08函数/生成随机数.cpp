#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int i, j;

    // 生成随机数之前一定要先调用srand()设置种子
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        // 生成10个随机数
        j = rand();
        cout << j << endl;
    }
    
    return 0;
}
