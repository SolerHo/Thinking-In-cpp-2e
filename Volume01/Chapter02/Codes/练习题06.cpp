/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 
 * 修改FillVector使它能把vector中的所有元素连接成单独的一个字符串，并打印，但是不要加行号。
 * 
 */
#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
    vector<string> v;
    ifstream in("test.txt");
    string line;
    while (getline(in,line))
    {
        v.push_back(line);  
    }
    for(int i = 0; i < v.size(); i++) // 添加一行数字
        cout<<v[i];

    
    cout<<endl;
}