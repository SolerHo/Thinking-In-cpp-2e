/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 引用传递问题
 * 
 * 可以使用引用传递参数地址。
 * 
 * 引用和指针的不同之处：
 * 
 * 1.引用的作用是传递地址，而按值传递是值的拷贝。
 * 
 */

#include<iostream>

using namespace std;

void f(int &r){ // 在函数f()的参数列表中，不用int*来传递指针，而int&来传递引用。
    cout<<"r = "<<r<<endl;
    cout<<"&r = "<<r<<endl;
    r = 5;
    cout<< "r = "<<r<<endl;
}

int main()
{
    int x =47;
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;
    f(x);
    cout<<"x = "<<x<<endl;
}