/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : IntVecto程序分析
 * 
 */


#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    for(int i = 0;i < 10;i++)
        v.push_back(i); // 末尾添加一个新的元素
    for(int i = 0;i < v.size();i++) // size()确定v的大小
        cout<<v[i]<<","; // 下标寻元素
    cout<<endl;
    
    for(int i = 0;i < v.size();i++)
        v[i] = v[i] * 10; // 乘以10
    for(int i = 0;i < v.size();i++)
        cout<<v[i]<<",";
    cout<<endl;
}




