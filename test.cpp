#include <iostream>
using namespace std;

template<typename T>
void mySwap(T& a, T& b){
	T tmp = a;
	a = b;
	b = tmp;
}

int main(){
    int a = 1;
	int b = 2;
	mySwap(a, b);
	
    system("pause");
	return 0;
}