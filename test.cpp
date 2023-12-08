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

MyException doWork1(){
    return MyException();
}

void test1(){
    MyException e(doWork1());
    cout<<"正常时，return异常类对象"<<endl;
}

void doWork2(){
    throw MyException();
}

void test2(){
    try{
        doWork2();
    }
    catch(MyException e){
        cout<<"异常时，catch异常类对象"<<endl;
    }
}
 
int main(){
    cout<<"test1:"<<endl;
    test1();

    cout<<endl<<endl;

    cout<<"test2:"<<endl;
    test2();

    system("pause");
    return 0;
}