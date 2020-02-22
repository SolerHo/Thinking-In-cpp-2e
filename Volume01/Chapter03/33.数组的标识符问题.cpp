/**
 * Date : 2020 - 02 - 22
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  数组的标识符问题
 * 
 * 数组的标识符不像一般变量的标识符。
 * 
 * 数组标识符不是左值，不能赋值。
 * 
 * 标识符只是进入方括号语法一种方式，当给出数组名没有方括号时，得到的是数组的起始地址。
 * 
 * 
 * 可以把数组标识符看作是数组起始处的只读指针。
 */

#include<iostream>

using namespace std;

int main()
{
    int a[10];
    cout<<"a = "<<a<<endl;
    cout<<"&a[0] = "<<&a[0]<<endl;
}

// 两个结果地址都是以十六进制的方式呈现。


