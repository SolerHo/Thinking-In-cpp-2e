/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :do while语句
 * 
 * do-while语句
 * 
 * 
 * 语法格式：
 * 
 * do
 * {
 *      // 语句
 * } while (表达式);
 * 
 * 
 * 与while的区别：
 * 
 * 表达式第一次计值就等于假，前面的语句也会执行至少一次。
 * 
 * 在while语句中，如果条件第一次为假，语句一次也不会执行。
 * 
 */

// 继续猜数字的例子
#include<iostream>

using namespace std;

int main()
{
    int secret = 15; // 定义一个目标值
    int guess;  // 创建一个存储猜的变量

    // 使用do-while语句进行
    do
    {
        cout<<"请输入你猜的数字："<<endl;
        cin>>guess;
    } while (guess!= secret);
    cout<<"恭喜你猜对了！"<<endl;
}



