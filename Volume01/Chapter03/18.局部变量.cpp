/**
 * Date : 2020 - 02 - 19
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 局部变量
 * 
 * 出现一个作用域内，局限于一个函数的。
 * 
 * 局部变量也称为自动变量（automatic variable）。
 * 
 * 寄存器变量 —— 一种局部变量，关键字register告诉编译器，加速访问速度取决于实现。
 * 
 * 
 * 
 * 使用register变量有限制，不可能得到或者计算register变量的地址。
 * 
 * register变量只能在 一个块 中声明（不可能有全局的或者静态的register变量）。
 * 
 * 但是register可以在一个函数中（即参数列表中）使用register变量作为一个形式参数。
 * 
 * 
 */

#include<iostream>

using namespace std;

void func(){
    static int i = 0;
    cout<<"i = "<<++i<<endl;
}

int main(){
    for(int x = 0;x < 10;x++)
        func();
}