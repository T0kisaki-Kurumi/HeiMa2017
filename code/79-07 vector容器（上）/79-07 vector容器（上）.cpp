#include <iostream>
#include <vector>
using namespace std;

void test1(){
    vector<int> v;
    // cout<<v.capacity()<<endl;
    for(int i=0; i<10; ++i){
        v.push_back(i);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    }
}

template<class T>
void printVector(vector<T>& v){
    for(T& i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void test2(){
    vector<int> v1;
    vector<int> v2(10, 6);
    printVector(v2);
    vector<int> v3(v2.begin()+5, v2.end());
    printVector(v3);
}

void test3(){
    
}

int main(){
    // test1();
    test2();
    // test3();

    system("pause");
    return 0;
}