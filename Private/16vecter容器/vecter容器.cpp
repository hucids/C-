// 使用vecter要包含头文件
#include <vector>
#include <iostream>
using namespace std;
// vecter 可自动扩容的动态数组
/*
自动扩容和缩容
连续内存存储
随机访问速度快 支持通过下标快速访问元素 时间复杂度为 O(1)
STL 生态完整 支持迭代器
缓存友好 自动内存管理 不需要手动 malloc/free
*/

int main(){
    // vector<int>vec; 创建一个空vecter
    // vector<int>vec(5); 创建并指定初始大小 默认值为0
    // vector<int>vec(5, 10); 创建并指定初始大小和初始值 结果: [10, 10, 10, 10, 10]
    vector<int>vec = {1, 2, 3, 4}; // 使用初始化列表
    // 向尾部添加元素 平均时间复杂度O(1)
    // vec.push_back(100); 
    vec.emplace_back(200); // 效率更高更推荐
    // 访问元素
    int x = vec[0]; // 1.下标访问 不越界检查 速度更快
    int y = vec[1]; // 2.at()访问 会越界检查 更安全
    // 获取大小
    cout << vec.size() << endl; // 5 当前元素数量
    cout << vec.capacity() << endl; // 8 当前已分配的内存容量 通常大于等于size 因为vector会提前申请更多空间 以减少频繁扩容
    // 扩容机制 vecter空间不足时 会发生扩容 申请更大空间 复制旧元素到新空间 释放旧内存 此时之前获取的迭代器可能会失效 因为可能重新分配了内存 代价高
    // 为了避免频繁扩容 可以提前分配内存 使用reserve()预分配空间
    vec.reserve(100);
    cout << vec.capacity() << endl; // 100
    // 遍历vecter
    for(size_t i = 0; i < vec.size(); i++){ 
        // 这里size_t类型是一种无符号整数类型 适合用于表示对象的大小（以字节为单位）和数组/容器的索引
        // 而vec.size()返回std::vector::size_type即 size_t 类型 类型一致防止编译错误
        cout << vec[i];  // 1.使用下标 仅使用于连续内存的容器(vecter array)
    };
    for(auto it = vec.begin(); it != vec.end(); ++it){
        // it是vector<int>::iterator迭代器类型 这里用auto简化
        // vec.begin()返回一个指向第一个元素的迭代器
        // vec.end();返回一个指向末尾之后的迭代器 不指向实际元素 仅表示遍历到此结束
        // 不用</> 迭代器不一定随机访问 所有迭代器都支持 != 比较
        // 用前置++ 前置不会产生临时拷贝对象，效率更高
        cout << *it << endl; // 2.使用迭代器 泛型通用且有许多迭代器的算法支持
    };
    for(int element: vec){
        cout << element << endl; // 3.范围for循环 效果与迭代器同 但更简洁
    }
    // 删除元素 用迭代器
    vec.erase(vec.end()-1); // 删除最后一个元素 事件复杂度O(1)
    vec.erase(vec.begin()+2); // 删第三个元素 后面元素会整体前移 会使得时间复杂度为O(n)
    // vector 不适合的场景 频繁头部插入(时间复杂度O(n)) 频繁中间删除 超大对象频繁扩容
    // 清空元素 clear 不一定会释放内存(capacity仍保留) 事件复杂度O(n)
    vec.clear();
    // 释放内存 
    vec.shrink_to_fit();
    return 0;
}
