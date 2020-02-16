/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 输入输出流
 * 
 */
#include<iostream>
using namespace std;

int main()
{
    cout<<"a number in decimal:"<<dec<< 15<<endl; // 十进制数
    cout<<"in octal:"<<oct<<15<<endl; // 八进制数
    cout<<"in hex:"<<hex<<15<<endl; // 十六进制数
    cout<<"a floating-point number:"<<3.14159<<endl; // 浮点数的格式由编译器自动确定
    cout<<"non-printing char(escape):"<<char(27)<<endl; // 通过显式类型转换，任何字符能转换成char类型，然后发送到刘对象。
    return 0;
}