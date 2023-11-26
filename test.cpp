#include <iostream>
#include <vector>
using namespace std;

class Test
{
public:
	// 带默认值参数   Test()  Test(20)都可以定义
	Test(int data = 10) : ma(data)
	{
		cout << "Test(int)" << endl;
	}
	~Test()
	{
		cout << "~Test()" << endl;
	}
	Test(const Test& t) :ma(t.ma)
	{
		cout << "Test(const Test&)" << endl;
	}
	void operator=(const Test& t)
	{
		cout << "operator=" << endl;
		ma = t.ma;
	}

    // // 移动构造函数
    // Test(Test&& other) noexcept: ma(other.ma)
    // {
    //     other.ma = 0;
    //     cout << "Test(Test&& other) noexcept" << endl;
    // }

    // // 移动赋值重载函数
    // Test& operator=(Test&& other) noexcept
    // {
    //     if(this != &other){
    //         ma = other.ma;
    //         other.ma = 0;
    //     }
    //     cout << "Test& operator=(Test&& other) noexcept" << endl;
    //     return *this;
    // }

	int getData() { return ma; }
private:
	int ma;
};
Test GetObject(Test &t)  // 不能返回局部的或者临时对象的指针或引用
{
	int val = t.getData();
	Test tmp(val);
	return tmp;
	// 返回临时对象
	// return Test(val);
}
int main()
{
    vector<int> v;
	Test t1;
	Test t2;
	t2 = GetObject(t1);  // 实参调用拷贝构造函数变为形参
    system("pause");
	return 0;
}