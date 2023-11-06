#include <iostream>
#include <cstring>
using namespace std;


int main(){
    // int *p = new int{5};
    // p[11] = 1;
    // cout<<p[1]<<endl;
    int *q = new int[5];
    q[555] = 1;
    cout<<sizeof(q)<<endl;
    // int *r = new int(5);
    // cout<<sizeof(r)<<endl;
    system("pause");
    return 0;
}