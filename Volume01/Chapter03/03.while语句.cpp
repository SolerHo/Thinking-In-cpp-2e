/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : while语句
 * 
 * while、do-while和for语句都是循环控制语句。
 * 
 * 重复执行语句直到控制表达式的计值为假
 * 
 * while语句的语法格式：
 * 
 * while (表达式)
 *  {
 *       语句
 *  }
 * 
 */
// 猜数字游戏
#include<iostream>

using namespace std;

int main()
{
    int secret = 15;
    int guess = 0;

    while (guess != secret)
    {
        cout<<"请猜数字:";
        cin>>guess;
        if (guess>secret)
            cout<<"你猜的数字大了"<<endl;
        else
            cout<<"你猜的数字小了"<<endl;   
    }
    cout<<"恭喜你猜对了！！！"<<endl;
}
