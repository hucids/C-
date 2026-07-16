#include <iostream>
using namespace std;
// 面向对象
// 定义一个类 使用关键字class 类的定义和成员函数定义都放main外面
class Box
{ // public private protected 访问修饰符
    private: // 私有成员 默认情况 对类外完全封闭 只有类自身的成员函数与被授予友元权限的实体能够操作这些内容
        /* data 一般会在私有区域定义数据，在公有区域定义相关的函数 以便在类的外部也可以调用这些函数 */
        double *ptr;
    public: // 公共成员在类外部可访问 可直接用.来访问
        // 成员变量声明
        double length; // 盒子长
        double breadth; // 宽
        double height; // 高
        // 成员函数声明(内联函数 类定义中的定义的函数都是内联函数 即使没有使用inline说明符)  可以定义在类定义内部/单独使用范围解析运算符::在外部来定义
        // 类成员函数可以操作类的任意对象 可以访问对象中的所有成员
        double get(void);
        double get_len(void);
        // void set(double len, double bre, double hei);
        Box(double len, double bre, double hei); // 构造函数 在每次创建类的新对象时自动执行
            /*
            构造函数的名称与类的名称完全相同
            没有返回类型(void也不能有) 前面不用写类型
            通常用于为成员变量设置初始值 与上面的set函数同效果
            */
        ~Box(); // 析构函数 在对象的生命周期结束时自动执行
            /*
            析构函数的名称与类的名称完全相同 前缀~
            不会返回任何值 也不能带有任何参数
            每个类只能有一个析构函数
            用于释放对象占用的资源（如动态内存、文件句柄等）
            */
        Box(const Box &obj); // 拷贝构造函数 在对象有复制操作时自动执行
            /*
            拷贝构造函数的名称与类的名称完全相同
            类带有指针变量 并有动态内存分配时 必须有一个拷贝构造函数
            无返回类型
            确保临时生成的副本 obj 拥有自己独立的内存 从而在销毁时不会误删原对象的内存
            */
        friend void print_len(Box obj); // 友元函数 函数原型前使用关键字 friend进行声明
            /*
            友元函数并不是成员函数 只是在类中声明 定义在类外部
            有权访问类的所有私有（private）成员和保护（protected）成员
            */
    protected: // 受保护成员 主要用于继承 子类(派生类)可以访问父类的 protected 成员
        /* data */ 
};
// 成员函数定义
double Box::get(void){
    return length*breadth*height;
};
double Box::get_len(void){
    return *ptr;
}
// void Box::set(double len, double bre, double hei){
//     length = len;
//     breadth = bre;
//     height = hei;
// };

// 构造函数定义1 体内赋值 先默认构造、再赋值
// Box::Box(double len, double bre, double hei){
//     cout << "Object is being created" << endl;
//     length = len;
//     breadth = bre;
//     height = hei;
//     // 为指针分配内存
//     ptr = new double;
//     *ptr = length; // 指针指向长度
// }
// 构造函数定义2 使用初始化列表来初始化成员变量 在进入函数体之前就完成了成员变量的初始化
// 对于 const 成员 引用成员 没有默认构造函数的对象成员 初始化列表是唯一的初始化方式
Box::Box(double len, double bre, double hei): length(len), breadth(bre), height(hei)
{ // 各成员的初始化顺序由它们在类中的声明顺序决定
    cout << "Object is being created" << endl;
    // 为指针分配内存
    ptr = new double;
    *ptr = length; // 指针指向长度
}

// 析构函数定义
Box::~Box()
{
    cout << "Object is being deleted" << endl;
    // 若有动态分配的资源，在此释放，例如：delete[] data;
    delete ptr;
};

// 拷贝构造函数定义
Box::Box(const Box &obj){
    cout << "调用拷贝构造函数并为复制的指针ptr重新分配内存" << endl;
    // 复制动态内存(深拷贝)
    ptr = new double;
    *ptr = *obj.ptr; // 拷贝值
    // 复制普通成员变量
    length = obj.length;
    breadth = obj.breadth;
    height = obj.height;
}

// 类外的函数定义
void display(Box obj){ // 用对象传值的函数
    // 此处传的是副本 会调用拷贝构造函数另开一个新内存 如果传递的是指针则不会
    cout << "长度:" << obj.get_len() << endl;
}
void print_len(Box obj){ // 友元函数
    // 此处传的是副本
    cout << "长度:" << obj.length << endl; // 此处length属于私有或受保护时也可以用.访问(与上面的display函数不同点)
}


int main(){
    Box box1(6.0, 7.0, 5.0); // 声明Box类的对象box1 定义了构造函数可以直接传值
    Box box2(1.1, 2.2, 3.3);
    double volume = 0.0; // 存储体积
    // 类的对象的公共数据成员可以使用直接成员访问运算符 . 来访问
    // 而私有的成员和受保护的成员不能使用直接成员访问运算符 (.) 来直接访问
    // box1.breadth = 7.0;
    // box1.height = 5.0;
    // box1.length = 6.0;
    volume = box1.get();
    cout << "box1的体积为" << volume << endl; // 210

    // box2.set(1.1, 2.2, 3.3);
    cout << "box2的体积为" << box2.breadth*box2.height*box2.length << endl; // 7.986
    print_len(box2); // 1.1
    display(box2); // 1.1
    // 结束会调用四次析构函数 删box1 box2 box2副本1 box2副本2
    return 0;
}

// 内联函数 通常与类一起使用
    /*
    类内部定义不用在函数名前面放置关键字inline 其他时候需要
    编译时 编译器会把该函数的代码副本放置在每个调用该函数的地方
    对内联函数进行任何修改 都需要重新编译函数的所有客户端 因为编译器需要重新更换一次所有的代码 否则将会继续使用旧的函数
    作用:在头文件中把函数定义为 inline 链接器就会允许这个函数的定义在多个.cpp 文件中存在 并自动只保留一份 合并掉重复的
    */
