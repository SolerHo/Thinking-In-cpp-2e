/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :if else语句
 * 
 * 涉及真假问题
 * 
 * if-else语句有两种形式：用else和不用else 。
 * 
 * if(表达式)
 *      语句
 * 
 * 或者
 * 
 * if(表达式)
 *      语句
 * else
 *      语句
 * 
 * “表达式” 的值为真或假。
 * 
 * “语句” 是一个以分号结束的简单语句，或者是一组包含在大括号内的简单语句构成的复合语句。
 * 
 */

// 程序的目的：猜数字
#include<iostream>

using namespace std;

int main()
{
    int i;
    cout<<"Enter a number:"<<endl;
    cin>>i;
    if(i > 5)
        cout<<"它比5大了。"<<endl;
    else
    {
        if(i < 5)
            cout<<"它比5小了"<<endl;
        else
            cout<<"它等于5了。"<<endl;
    }
    cout<<"Enter a number:"<<endl;
    cin>>i;

    if(i<10)
        if(i>10)
            cout<<" 5 < i < 10 "<<endl;
        else
            cout<<" i<= 5 "<<endl;
    else
        cout<<"i >= 10 "<<endl;
}


