/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 计算圆的面积
 * 
 */

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int r; // 声明圆的半径
    cout<<"输入圆的半径："<<endl; 
    cin>>r; // 读取半径r
    float pi = 3.14; // 声明pi的值
    float area = pi * r *r;
    cout<<"圆的面积是："<<area<<endl; // 输出圆的面积

}