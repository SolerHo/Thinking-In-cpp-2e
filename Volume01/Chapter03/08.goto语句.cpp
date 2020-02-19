/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : goto语句
 * 
 */

// goto语句 —— 直接进行跳转到哪一行进行执行语句

#include<iostream>

using namespace std;

int main(void)
{
    long val = 0;
    for(int i  = 1;i<1000;i++)
    {
        for(int j = 1;j<100;j+=10)
        {
            val = i * j + j;
            if(val>47000)
                goto bottom;
                // 如果使用的是 ： break ，那么只会到for循环
        }
    }
    bottom: // A label
    cout<<val<<endl;
}