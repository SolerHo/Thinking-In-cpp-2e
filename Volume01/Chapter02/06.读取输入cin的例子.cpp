/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 读取输入cin的例子
 * 
 */
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter a decimal number:";
    /**
     * cin(control input，控制台输入)，通常是指从控制台输入，对于这类型输入可以重定向到其他的输入源。
     * 
     * 使用 “>>” 输入流操作符，接受与参数类型相同的输入。
     * 
     */
    cin>>number; 

    cout<<"value in octal = 0"<<oct<<number<<endl; // 八进制数
    cout<<"value in hex = 0x"<<hex<<number<<endl; // 十六进制数
    return 0;
}