/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 
 * 
 * 修改FillVector.cpp使它能够从后向前打印各行
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
    for(int i = v.size()-1; i>=0; i--) // 添加一行数字
        cout<<i<<":"<<v[i]<<endl;

    return 0;
}




