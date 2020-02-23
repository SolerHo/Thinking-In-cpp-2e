/**
 * Date : 2020 - 02 - 23
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  main()函数中的特殊参数表
 * 
 */
#include<iostream>
using namespace std;

int main(int argc, char* argv[]) // 第一个参数的值是第二个参数的数组元素的个数。第一个参数是char*数组
{
    cout<<"argc = "<<argc<<endl;
    
    for(int i = 0; i < argc;i++)
        cout<<"argv[" <<i<<"] =  "<<argv[i]<<endl; // argv[0]是程序本身的路径和名字，目的：让程序发现自己的信息
}