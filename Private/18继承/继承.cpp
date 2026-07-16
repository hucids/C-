#include <iostream>
using namespace std;
/*
一个类可以派生自多个类 一个派生类可以从多个基类继承数据和函数(多继承)
派生类可以访问基类中所有的非私有成员
除了基类的构造函数 析构函数 拷贝构造函数 重载运算符 友元函数以外 其他基类的方法都可以继承
继承类型: 看访问修饰符  公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
                      保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
                      私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。
*/


// 基类
class Animal
{
private:
    /* data */
public:
    // Animal(double h, double w); // 基类的构造函数 派生类无法使用
    void setHeight(double h){
        height = h;
    }
    void setWeight(double w){
        weight = w;
    }
protected:
    double height;
    double weight;
};

// Animal::Animal(double h, double w):height(h), weight(w)
// {   cout << "已创建\n";
// }

// 派生类-单继承
class Person: public Animal  // 访问修饰符 public/protected/private 不写默认private
{
private:
    /* data */
public:
    void printBIM();
};

void Person::printBIM(){
    double BIM = weight/(height*height);
    cout << "BIM = " << BIM << endl;
};
// 派生类-多继承
/*
class <派生类名>:<继承方式1><基类名1>,<继承方式2><基类名2>,…
{
<派生类类体>
};
*/

int main(){
    Person people1;
    people1.setHeight(1.58);
    people1.setWeight(50);
    people1.printBIM();
    return 0;
}
