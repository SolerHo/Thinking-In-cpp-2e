/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :指针概述
 * 
 * 每一个空间的大小取决于具体机器的结构，称为机器的字长（word size）。
 * 每一个空间可按地址和其他空间区分。
 * 
 * 只要在标识符前加上 “&” ，会得到标识符的地址。
 * 
 * 指针的问题
 * 
 * 指针可以有一个专门的存放地址的变量类型。
 * 
 * 定义指针的运算符和用于乘法的运算符 “*” 一样。
 * 
 * 定义一个指针时，必须规定指向的变量类型。
 * 
 */

#include<iostream>

using namespace std;

int dog,cat,bird,fish;

void f(int pet){
    cout<<"宠物的编号为："<<pet<<endl;
}

int main()
{
    int i,j,k;

    // (long)是一种类型转换（cast）。
    cout<<"f() = "<<(long)&f<<endl; 
    cout<<"dog = "<<(long)&dog<<endl;
    cout<<"cat = "<<(long)&cat<<endl;
    cout<<"bird = "<<(long)&bird<<endl;
    cout<<"fish = "<<(long)&fish<<endl;
    cout<<"i = "<<(long)&i<<endl;
    cout<<"j = "<<(long)&j<<endl;
    cout<<"k = "<<(long)&k<<endl;

}
