/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :自增和自减运算符
 * 
 * 自增运算符 —— 增加一个单位
 * 
 * 运算符在变量之前（++i），则先执行运算，再产生结果值。
 * 
 * 运算符在变量之后（i++），则产生当前值，再执行运算。
 * 
 * 
 * 自减运算符（--） —— 减小一个单位
 * 自增运算符（++） —— 增加一个单位
 * 
 */


#include<iostream>

using namespace std;

int main()
{
    int i = 3;
    int j = 5;
    cout<<++i<<endl; // 先执行再有结果
    cout<<j++<<endl; // 先结果再执行

    int z = 4;
    int h = 6;
    cout<<--z<<endl; // 先执行再有结果
    cout<<h--<<endl; // 先结果再执行

}


