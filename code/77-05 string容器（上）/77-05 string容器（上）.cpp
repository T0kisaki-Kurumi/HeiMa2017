#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void test1(){
    // 构造
    string s1;
    string s2(s1);
    string s3("aaa");
    string s4(10,'c');
    cout<<s3<<endl;
    cout<<s4<<endl<<endl;

    // 赋值
    string s5;
    s5 = s3;
    cout<<s5<<endl;
    char s[] = {'c','v','b','n','\0'};
    s5 = s;
    cout<<s5<<endl;
    s5 = 'c';
    cout<<s5<<endl;

    string s6 = "abcdefg";
    string s7;
    s7.assign(s6);
    cout<<s7<<endl;
    s7.assign(s6.c_str(), 3);
    cout<<s7<<endl;
    s7.assign(s6, 3, 2);
    cout<<s7<<endl;
}

void test2(){
    string s = "Hello world!";
    // for(int i=0; i<s.size(); ++i){
    //     cout<<s.at(i);
    //     // cout<<s[i];
    // }
    // cout<<endl;

    try{
        // cout<<s[100]<<endl;
        cout<<s.at(100)<<endl;
    }
    // catch(out_of_range& e){
    catch(exception& e){
        cout<<e.what()<<endl;
    }
}

void test3(){
    string s1 = "abc";
    string s2 = "def";
    // s1 = s1 + s2;
    s1 += s2;
    cout<<s1<<endl;

    string s3 = "ghi";
    s1.append(s3);
    s1.append(3, 'j');
    cout<<s1<<endl;
    string s4 = "111klm";
    s1.append(s4, 3, 2);
    cout<<s1<<endl;
}

void test4(){
    string s1 = "abcdefabc";
    cout<<s1.find("bc")<<endl;
    cout<<s1.find("666")<<endl;
    cout<<typeid(string::npos).name()<<endl;
}

void test5(){
    
}

int main(){
    // test1();
    // test2();
    // test3();
    test4();
    // test5();

    system("pause");
    return 0;
}