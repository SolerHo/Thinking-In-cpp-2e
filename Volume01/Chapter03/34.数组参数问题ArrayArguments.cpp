/**
 * Date : 2020 - 02 - 22
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  数组参数问题ArrayArgument
 * 
 * 给一个函数传递数组时，命名数组以产生的起始地址很重要。
 * 
 * 程序中的问题：数组不可以按值传递，也就是说，不会自动得到传递给函数的数组的本地拷贝。
 * 所以修改数组时，实际上是一直在修改外部对象。
 */
#include<iostream>
#include<string>

using namespace std;

void func01(int a[],int size){
    for(int i = 0;i < size;i++)
        a[i] = i * i - i;
}

void func02(int* a,int size){
    for(int i = 0; i < size;i++)
        a[i] = i * i + i;
}

void print(int a[],string name,int size){ 
    for(int i = 0;i < size;i++)
        cout<<name<<"["<<i<<"] = "<< a[i]<<endl;
}

int main()
{
    int a[5],b[5];
    print(a,"a",5);
    print(b,"b",5);

    // 初始化数组
    func01(a,5);
    func01(b,5);
    print(a,"a",5);
    print(b,"b",5);

    func02(a,5);
    func02(b,5);
    print(a,"a",5);
    print(b,"b",5);
}

// 数组不可以按值传递，不会自动地得到传递给函数的数组的本地拷贝。

// 数组可以是任何一种类型，包括了指针数组。

