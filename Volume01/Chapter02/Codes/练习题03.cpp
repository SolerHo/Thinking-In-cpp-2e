/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 
 * 
 * 编写一个程序用来打开文件并统计文件中以空格隔开的单词数量
 */


#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ifstream in("test.txt");
    string word;
    int num = 0;
    while (in>>word)
    {
        cout<<word<<" ";
        num++;
    }
    cout<<num<<endl;

    return 0;
    
}

