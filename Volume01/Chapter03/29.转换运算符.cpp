/**
 * Date : 2020 - 02 - 20
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 转换运算符
 * 
 * 转换 —— 一种数据类型转换为另一种数据类型。一般用于变量，而不用于常量。
 * 
 * 
 * 转换允许使用显式类型变换，或在转换没有正常情况下发生强制转换。
 * 
 * 
 * 转换的方式：
 * 
 * 用括号把想要转换的数据类型（包括所有的修饰符）括起来放在值（值：可以是一个变量、常量、表达式所产生的值或者函数的返回值）的左边。
 * 
 * 
 * 转换的缺点：指针问题中，占用更多的内存，破坏数据。
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    string b = "string";

    cout<<"a的值是："<<a<<endl;
    cout<<"b的值是："<<b<<endl;

    return 0;


}