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
    char* const name = "aaa";
    cout<<strlen(name)<<endl;
    int * a = new int[10];
    system("pause");
    return 0;
}