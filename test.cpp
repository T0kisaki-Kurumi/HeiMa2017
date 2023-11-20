#include <iostream>
#include <cstring>
using namespace std;

class A{
private:
    int x;
};

class B: public A{
public:
    int b;
};

class C{
public:
    int c;
};

int main(){
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    cout<<sizeof(C)<<endl;
    
    system("pause");
    return 0;
}