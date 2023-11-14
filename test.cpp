#include <iostream>
#include <cstring>
using namespace std;

class Person{
public:
    Person(int x): a(x){}

    void printAnother(Person& another){
        cout<<another.a<<endl;
    }

private:
    int a;
};


int main(){
    // Person p1(10);
    // Person p2(20);
    // p1.printAnother(p2);
    int x = 1;
    cout<<x++<<endl;
    system("pause");
    return 0;
}