/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 
 * 
 * 创建三个vector<float>对象，与 练习题8 一样填写前两个对象，编写一个for 循环，把前两个vector的每一个相应元素相加起来，结果放入第三个vector的相应元素中，显示三个vector的结果。
 * 
 */

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<float> v1;
    vector<float> v2;
    vector<float> v3;

    for(int i = 0; i < 25; ++i)
        v1.push_back(i + i * 0.5);
    for (int i = 0; i < 25; ++i)
        v2.push_back(i + i * 0.2);

    for(int i = 0; i < v1.size(); ++i)
        v3.push_back(v1[i] + v2[i]);
    
    for(int i = 0; i < v3.size(); ++i)
        cout << v3[i] << " = " <<v1[i] << " + "<<v2[i] <<endl;
    
}
