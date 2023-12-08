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

void doWork(){
    // throw MyException();
    MyException e;
    throw &e;
}

void test1(){
    try{
        doWork();
    }
    // catch(MyException){
    //     cout<<"捕获MyException异常"<<endl;
    // }
    // catch(MyException e){
    //     cout<<"捕获MyException异常"<<endl;
    // }
    // catch(MyException& e){
    //     cout<<"捕获MyException异常"<<endl;
    // }
    catch(MyException* e){
        cout<<"捕获MyException异常"<<endl;
    }
}
 
int main(){
    try{
        test1();
    }
    catch(int){
        cout<<"捕获int类型异常"<<endl;
    }
    catch(double){
        cout<<"捕获double类型异常"<<endl;
    }

    system("pause");
    return 0;
}