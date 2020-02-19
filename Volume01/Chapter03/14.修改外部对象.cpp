/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 修改外部对象
 * 
 * 按值传递（pass-by-value）
 * 
 * 通常，向函数传递参数时，在函数内部生成该参数的一个拷贝。
 * 
 * 
 */


#include<iostream>

using namespace std;

void f(int a){ // a是一个局部变量（local variable），只有在调用函数时才存在。
    cout<<"a = "<<a<<endl;
    a = 5;
    cout<<"a = "<<a<<endl;
}

int main()
{
    int x = 47; // 对函数f(）内部时，变量x就是外部对象（outside object）。
    cout<<"x = "<<x<<endl;

    f(x);
    cout<<"x = "<<x<<endl;
    
}