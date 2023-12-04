#include <iostream>
using namespace std;


int main(){
    int a[5] = {1,2,3,4,5};
	int b[5] = {6,7,8,9,10};
	int *c;
	c = a;
	cout<<c[1];
	
    system("pause");
	return 0;
}