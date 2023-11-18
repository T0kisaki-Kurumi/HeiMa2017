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
    char name[1024];
    cout<<strlen(name)<<" "<<name<<endl;
    cin>>name;
    cout<<strlen(name)<<" "<<name<<endl;
    cin>>name;
    cout<<strlen(name)<<" "<<name<<endl;
    system("pause");
    return 0;
}