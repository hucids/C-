#include <iostream>
using namespace std;

int* func();

// 数组: 存储一个固定大小的相同类型元素的顺序集合
// 声明一个数组变量 数组中的特定元素可以通过索引访问
// 所有的数组都是由连续的内存位置组成 最低的地址对应第一个元素，最高的地址对应最后一个元素。
int main(){
    // 声明数组 type arrayName [ arraySize ]; 一维数组 先声明再逐个赋值
    // double balance[5]; // balance是数组名 内含5个double类型的数字
    // 声明并初始化数组 也可以省略数组大小 会自动识别到个数
    double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    // 给数组某个元素赋值
    balance[1] = 20.0;
    // 访问数组元素
    double i = balance[0];

    // 多维数组 type name[size1][size2]...[sizeN];
    // 一般使用二维数组 本质上是一个一维数组的列表
    // 定义并初始化二维数组
    int arr[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };  // 三行四列 内部嵌套括号可写可不写 但觉得写了更清楚 int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // 访问二维数组
    int a1 = arr[0][1];

    // 指向数组的指针
    // 数组名是指向数组中第一个元素的常量指针
    double array[50]; // 此处array数组名是一个指向&array[0]的指针 也就是array的第一个元素的地址值
    double *p = array; // p赋值为array的第一个元素的地址值
    cout << p << endl;  // 0x1001ff550
    // 访问数组元素的另一种方式
    cout << *(array+1) << endl; // 或*(p+1)

    // 传递数组给函数
    // 传递数组名给函数 实际上传递的是指针类型 是地址
    // 传递数组给函数时 函数的形式参数可定义为数组或指针 int *p / int arr[10] / int arr[]

    return 0;
}

// 从函数返回数组
    // 通过指定不带索引的数组名来返回一个指向数组的指针 而不能返回一个完整的数组
    // 要先声明一个返回指针的函数 int* func(){ }
int* func(){
    // 静态数组法:因为要返回局部变量的地址 所以要定义static变量 否则函数结束会被销毁导致无效
    static int myarr[3] = {1, 2, 3};
    return myarr; // 这样就可以从外面拿到函数内部的数据了
    // 动态数组法
    /*在函数内部使用 new 运算符来分配一个数组 并在函数结束时(main函数内)使用 delete 运算符释放该数组
    int* myArray = new int[3];
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;
    return myArray;

    // 在main函数中使用完该函数后 使用 result释放内存
    delete[] result;
    return 0;
    */
}
