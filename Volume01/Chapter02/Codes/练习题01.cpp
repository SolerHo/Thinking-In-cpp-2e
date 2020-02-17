/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 修改hello.cpp,能够打印输出你的名字和年龄
 * 
 */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int age = 24;
    string name = "Soler Ho";
    cout<<"hello I am,"<<name<<","<<endl;
    cout<<"I am "<<age<<" years old!"<<endl;

    return 0;
}