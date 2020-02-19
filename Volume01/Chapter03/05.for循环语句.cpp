/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : for循环
 * 
 * for语句的一般格式：
 * 
 * for (initialization;conditon;step) 
 *           语句
 * 
 *  
 * for循环通常用于计数
 * 
 */

#include<iostream>

using namespace std;

int main()
{
    
    for(int i = 0;i < 128; i++)
        if(i!=55)
            cout<<"这个值是："<<i
            <<"字符为："
            <<char(i)<<endl; // char() 进行了打印转换
}