/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 
 * 编写一个程序，统计文件中特定单词的出现次数（要求使用string类型的运算符“==”，来查找单词）。
 * 
 */ 
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main(void)
{
    ifstream in("test.txt");
    int count = 0;
    string word = "line";

    string str;

    while(in>>str)
    {
        if(str == word)
        {
            count++; // 统计单词数
        }
    }
    cout<<word<< " 出现的次数为：" <<count<<endl;

    return 0;
}
