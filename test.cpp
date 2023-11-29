#include <iostream>
using namespace std;

class A{
public:
	int x = 1;
};

class B: A{

};

int main(){
    B b;
	cout<<b.x;
	
    system("pause");
	return 0;
}