/**
 * Date : 2020 - 02 - 19
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 逗号运算符
 * 
 * 逗号并不只是在定义多个变量时用来分隔变量。
 * 
 * 例子：int i,j,k;
 * 
 * 也可以用于函数参数列表中。也可能作为一个运算符用于分隔表达式。
 * 
 * 一般不把逗号运算符看作运算符。
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    int a = 0,b = 1,c = 2, d = 3,e = 4;
    a = (b++,c++,d++,e++);
    cout<<"a = "<<a<<endl;

    (a = b++),c++,d++,e++;
    cout<<"a = "<<a<<endl;

    return 0;
}

// 逗号表达式加括号的时候，最终结果是最右边的原始值的结果.