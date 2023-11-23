#include <iostream>
#include <cstring>
using namespace std;

class A{
public:
    int x;
    int y;

    A(int x, int y): x(x), y(y){}
};

int main(){
    A a(1,2);
    cout<<a.x<<" "<<a.y<<endl;    
    system("pause");
    return 0;
}