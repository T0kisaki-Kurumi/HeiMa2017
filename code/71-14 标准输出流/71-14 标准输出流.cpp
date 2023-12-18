#include <iostream>
#include <cstring>
using namespace std;

void test1(){
    cout.put('a').put('\n');
    char buf[] = "hello world\n";
    cout.write(buf, strlen(buf));
}

int main(){
    test1();

    system("pause");
    return 0;
}