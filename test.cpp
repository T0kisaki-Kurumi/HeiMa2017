#include <iostream>
using namespace std;
class A{
    friend class B;
private:
    int x=1;
};

class B{
    friend class C;
private:
    int x=2;
};

class C{
public:
    void visitB(){
        B b;
        cout<<b.x<<endl;
    }
    // void visitA(){
    //     A a;
    //     cout<<a.x<<endl;
    // }
private:
    int x=3;
};

int main(){
    
    system("pause");
    return 0;
}