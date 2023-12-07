#include <iostream>
#include <string>
using namespace std;

// 常量类型转换
void test1(){
    int a = 1;
    const int* p1 = (int*)&a;
    // *p1 = 2;  // 常量指针不能修改指向的值
    int* p2 = const_cast<int*>(p1);
    *p2 = 2; // 转换为非常量之后就可以转换
    const int* p3 = const_cast<const int*>(p2);
    // *p3 = 2;  // 常量指针不能修改指向的值
}

void test2(){
    int a = 1;
    int *p = &a;
    const int* p1 = const_cast<const int*>(p);
    // int const* p1 = const_cast<const int*>(p); // 和上面一样
    int* const p2 = const_cast<int* const>(p);
    const int* const p3 = const_cast<const int* const>(p);
    p1 = nullptr;
    p2 = nullptr;
    p3 = nullptr;
    *p1 = 2;
    *p2 = 2;
    *p3 = 2;
}
 
int main(){
    test1();

    system("pause");
    return 0;
}