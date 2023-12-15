#include <iostream>
using namespace std;

void printArray(int* arr, int len){
    for(int i=0; i<len; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int b[10];
 
int main(){
    int a[5]{0};
    printArray(a,sizeof(a)/sizeof(int));
    printArray(b,sizeof(b)/sizeof(int));
    system("pause");
    return 0;
}