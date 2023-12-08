#include <iostream>
using namespace std;

class MyException{
public:
    MyException(){
        cout<<"MyException构造"<<endl;
    }
    MyException(const MyException& e){
        cout<<"MyException拷贝构造"<<endl;
    }

    ~MyException(){
        cout<<"MyException析构"<<endl;
    }
};

MyException doWork(){
    return MyException();
}

void test1(){
    // MyException e(doWork());
    // doWork();
    MyException e = doWork();
    cout<<"捕获"<<endl;
}
 
int main(){
    test1();

    system("pause");
    return 0;
}