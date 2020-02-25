/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  指针算术（pointer arithmetic）指的是对指针的某些算术运算符的应用。
 * 
 * 
 ********************************************************************/


#include<iostream>

using namespace std;

int main()
{
    int i[10];
    double d[10];
    int* ip = i;
    double* dp = d;

    cout<<"ip = "<<(long)ip<<endl;
    ip ++; // 改变指针指向下一个值
    cout<<"ip = "<<(long)ip<<endl;

    cout<<"dp = "<<(long)dp<<endl;
    dp++;
    cout<<"dp = "<<(long)dp<<endl;

}