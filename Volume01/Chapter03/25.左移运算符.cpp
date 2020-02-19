/**
 * Date : 2020 - 02 - 19
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 左移运算符测试代码
 * 
 * 
 * 针对无符号数
 */

#include<iostream>

using namespace std;

int main(void)
{
    int n;
    int ans; // 进行移位运算
    for(int i = 1; i <=10;i++)
    {
        cout<<i<<" 移位后的值是 ：  ";
        ans = i << 1; // ans = i * 2^1
        cout<<ans<<endl;
    }

    return 0;
}