/**
 * Date : 2020 - 02 - 19
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 静态变量
 * 
 * 关键字static
 * 
 * 函数中定义的局部变量在函数作用域结束时消失。当再次调用函数时，会重新创建该变量的存储空间，其值会重新初始化。
 * 
 * 定义函数的局部变量static（静态的），并初始化，可以使得局部变量的值保存在程序的生命周期里面。
 * 
 * 
 * static变量的优点：函数范围之外不可用。
 * 
 * 当应用static于函数名和所有函数外部的变量时（文件外部不可用名字），函数名或变量是局部于文件，也就是所谓的文件作用域（file scope）。
 * 
 */
#include<iostream>


using namespace std;

void func(){
    static int i = 0;
    cout<<"i = "<<++i<<endl; // ++i 先执行再结果
}

int main(){
    for(int x = 0;x < 10;x++) // x++ 先结果再执行
        func();
}