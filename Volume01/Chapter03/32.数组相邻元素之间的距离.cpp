/**
 * Date : 2020 - 02 - 20
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 打印数组相邻元素之间的距离
 * 
 */
#include<iostream>

using namespace std;

int main(void)
{
    int a[10];
    cout<<"sizeof(int) =  "<<sizeof(int)<<endl;
    for(int i = 0; i < 10;i++)
        cout<<"&a["<<i<<"] = "<<a[i]<<(long)&a[i]<<endl;
}