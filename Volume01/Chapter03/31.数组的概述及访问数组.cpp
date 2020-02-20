/**
 * Date : 2020 - 02 - 20
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 数组的概述及访问数组
 * 
 * 数组 —— —— 复合类型，允许在一个单一的标识符下把变量结合在一起，一个接着一个。
 * 
 * 
 * 要访问一个数组元素，数组的索引从下标0开始，不能越出数组的边界。例如：
 * a[5] = 57; 
 * 
 */
#include<iostream>

using namespace std;

int main(void)
{
    int a[10];
    for(int i = 0; i < 10;i++){ // 使用遍历的方式进行访问数组
        a[i] = i * 10;
        cout<<"a["<<i<<"] = "<<a[i]<<endl; 
    }
}