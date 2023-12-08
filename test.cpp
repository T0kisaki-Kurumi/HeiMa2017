#include <iostream>
using namespace std;

class base{
public:
    virtual void print(){
        cout<<1<<endl;
    }
};

class son:public base{

};
 
int main(){
    son().print();

    system("pause");
    return 0;
}