#include <iostream>
#include <deque>
using namespace std;

template<class T>
void printDeque(const deque<T>& d){
    for(class deque<T>::const_iterator it = d.begin(); it != d.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test1(){
    deque<int> d{1,2,3,4,5};
    printDeque(d);
}

int main(){
    test1();

    system("pause");
    return 0;
}