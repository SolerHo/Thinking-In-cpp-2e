/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :
 * 
 * 标准C和C++中，函数原型（function prototype），使用函数原型，在声明和定义一个函数时，必须使用参数类型描述。
 * 
 * 在函数原型的声明变量时，不能使用和定义一般变量同样的形式。
 * 
 * 声明时必须指明每一个参数的类型。例如：
 * 
 * int transiate(float x, float y, float z);
 * 
 * 
 * 函数的返回值
 * 
 * 对于C++而言，函数原型必须指明函数的返回值类型（在C中，如果省略返回值，则表示默认为整型）。
 * 
 * 返回值的类型放在函数名的前面
 * 
 * 为了表明没有返回值可以使用void关键字。
 * 
 */
#include<iostream>

using namespace std;

char cfunc(int i) {
    if(i == 10)
        return 'a';
    if(i == 1)
        return 'g';
    if(i == 5)
        return 'z'; 
    return 'c';  // 使用return语句退出函数
}

int main()
{
    cout<<"Type an integer:";
    int val;
    cin>>val;
    cout<<cfunc(val)<<endl;
}

