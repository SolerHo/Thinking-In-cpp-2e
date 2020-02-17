/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 字符串概述和使用
 * 
 */
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    string s3 = "This is a string";
    string s4("I am ");
    s2 = "Soler Ho"; // 使用 = 重新对s2进行赋值操作
    s1 = s3 + " " + s4;
    cout<<s1 + s2 + "!" <<endl; //直接使用“ + ” 对字符串进行连接即可。

    return 0;
}






