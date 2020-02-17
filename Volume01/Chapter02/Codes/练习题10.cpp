/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 
 * 创建一个vector<float>，像 练习题 9 一样输入25个数字，求每个数的平方，并把它放入vector的同样位置。显示运算前后的vector
 * 
 */
#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<int> v;

    for(int i = 0; i < 25;++i)
        v.push_back(i+2);
    
    printf("before change\n");

    for(int i = 0; i < v.size();++i)
        cout <<v[i]<<" ";
    
    cout <<endl;

    for(int i = 0; i < v.size();++i)
        v[i] = v[i] * v[i];

    printf("after change\n");

    for(int i = 0; i < v.size();++i)
        cout <<v[i]<<" ";

    cout <<endl;
}

