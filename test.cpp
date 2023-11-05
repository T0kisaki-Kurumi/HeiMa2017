#include <iostream>
using namespace std;


int main(){
    int a = 1;
    int & b = a;
    int& c = a;
    int &d = a;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    b = 2;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    c = 3;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    d = 4;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    system("pause");
    return 0;
}