#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;
public:
    int num = 0;
    // 类的静态成员 用static关键字
    /*
    创建多个对象时 静态成员只有一个副本
    创建时自动初始化为0 不能把静态成员的初始化放置在类的定义中 但可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化
    */
    static int count;
    // 类的静态成员函数
    /*
    在类对象不存在的情况下也能被调用
    只要使用类名加范围解析运算符 :: 就可以访问
    只能访问静态成员数据、其他静态成员函数和类外部的其他函数
    不能访问类的 this 指针
    */
    static int getcount(){
        return count;
    };
    MyClass(/* args */);
    ~MyClass();
    // this指针 隐藏的指针 不分配内存 不需要析构函数删除
    /*
    指向当前对象的实例 每一个对象都能通过 this 指针来访问自己的地址
    只有成员函数才有 this 指针 用来指向调用对象 友元函数无this指针
    */
    void setValue(int value){ // 成员变量与函数参数同名了 但这里用了指针 因此编译器能区分开
        this -> value = value; // 明确地告诉编译器我们想要访问当前对象的成员变量，而不是函数参数或局部变量
        count ++; // 每次创建对象时加1 一般放在构造函数内
    };
    void printValue(){
        cout << "Value:" << this->value << endl;
    };
};

MyClass::MyClass(/* args */)
{
}

MyClass::~MyClass()
{
}

// 指向类的指针可作为函数参数传递
void printValue2(MyClass *ptr){
    ptr->printValue();
}

int MyClass::count = 0; // 初始化MyClass的静态成员

int main(){
    MyClass obj1;
    obj1.setValue(42);
    obj1.printValue();
    // 指向类的指针
    /*
    指向类的指针指向一个类的对象
    指向类的指针可以用于访问对象的成员变量和成员函数
    需要使用成员访问运算符 ->
    */
    // 声明并初始化指向类的指针
    MyClass *ptr = &obj1;
    // 通过指针访问成员变量
    cout << ptr->num << endl;
    // 通过指针调用成员函数
    ptr->printValue();

    MyClass obj2;
    obj2.setValue(20);
    printValue2(&obj2); // 传指针给函数

    cout << "Total objects:" << MyClass::count << endl; // 输出对象总数
    cout << "Total objects:" << MyClass::getcount() << endl; // 输出对象总数

    return 0;
}
