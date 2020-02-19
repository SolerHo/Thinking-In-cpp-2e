/**
 * Date : 2020 - 02 - 19
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 外部变量
 * 
 * extern关键字 —— —— 告诉编译器存在着一个变量和函数。
 * 
 * 而且变量或函数可能在另一个文件中或者在当前文件的后面定义。
 * 
 */

#include<iostream>

using namespace std;

extern int i;
extern void func();

int main(){
    i = 0;
    func();
}

int i;
void func(){
    i++;
    cout<<i;
}


