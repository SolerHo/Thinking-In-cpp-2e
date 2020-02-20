/**
 * Date : 2020 - 02 - 19
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : sizeof  独立运算符
 * 
 * 
 * sizeof提供对有关数据项目所分配的内存大小。
 * 
 * 
 * sizeof() 给出任何变量使用的字节数，也可以给出数据类型的大小（不用变量名）。
 * 
 * 注意点：
 * 
 * 1.sizeof是运算符，不是函数。
 * 2.使用类型时，要加括号，对于变量，可以不要括号
 * 
 */
#include<iostream>

using namespace std;

int main()
{

    cout<<"sizeof(double) = "<<sizeof(double)<<endl;
    cout<<"sizeof(char) = " <<sizeof(char)<<endl;
    cout<<"sizeof(int) = "<<sizeof(int)<<endl;

}
