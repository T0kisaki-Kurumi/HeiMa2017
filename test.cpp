#include <iostream>
using namespace std;

void func();
void func(int a, double b){
	cout<<a<<b<<endl;
}
// void func(int c, double d){
// 	cout<<d<<c<<endl;
// }

int main(){
    int a = 1;
	double b = 1.1;
	func(a,b);
	func();
	
    system("pause");
	return 0;
}