#include <iostream>
using namespace std;

int main(){
    int* a = new int(1);
	int* b = new int(2);
    const int* p = a;
	p = b;
    cout<<*p<<endl;
	*p = 3;
    int* const p2 = a;
	p2 = b;
    cout<<*p2<<endl;
	
    system("pause");
	return 0;
}