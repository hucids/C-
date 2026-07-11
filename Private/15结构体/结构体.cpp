#include <iostream>
#include <cstring>
using namespace std;

struct Books
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
        // 可用构造函数初始化这些成员
        // Books(char t, char a, char s, int id):
        //     title(t), author(a), subject(s), book_id(id) {}
    } book;

void print_bookname(struct Books book){
    cout << "书名: " << book.title << endl;
};

void print_book_id(const Books* book){
    cout << "书籍id = " << book ->book_id << endl;
};

int main(){
    // 结构体struct 允许存储不同类型的数据项 表示一条记录
    // 与class类相似(但class中成员变量默认private) 允许定义成员变量和成员函数
    /* 定义结构
    struct type_name {
        member_type1 member_name1; 成员变量 struct中默认为public 可以直接访问
        member_type2 member_name2;
        member_type3 member_name3;
        .
        .
    } object_names;
    */
    // object_names 指定一个或多个结构变量
    
    /* 结构体优点
    简单数据封装 相比class更轻量适合小型数据对象 面向对象支持
    */
    // 访问结构成员 使用成员访问运算符（.）
    Books book1; // 定义结构体类型 Books 的变量 Book1
    strcpy(book1.title, "C++教程");
    strcpy(book1.subject, "编程语言");
    strcpy(book1.author, "Runoob");
    book1.book_id = 12345;
    // 使用构造函数定义
    // Books book1("C++ 教程", "Runoob", "编程语言", 12345);

    // 结构作为函数参数
    print_bookname(book1);

    // 指向结构的指针
    struct Books *book_pointer; // 定义一个指向Books结构体的指针
    book_pointer = &book1; // 存储结构变量的地址
    // 使用 -> 运算符来使用指向该结构的指针访问结构的成员
    cout << "书籍作者: " << book_pointer ->author << endl;
    print_book_id(book_pointer);
       
    return 0;
}
