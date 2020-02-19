/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 全局变量
 * 
 * 在所有函数体的外部定义的的，程序的所有部分都可以使用。
 * 
 * 全局变量不受作用域的影响
 * 
 */

#include<iostream>

using namespace std;

int gloabl;

void func();

int main(){
    gloabl = 12;

    cout<<gloabl<<endl;
    func();
    cout<<gloabl<<endl;
}


