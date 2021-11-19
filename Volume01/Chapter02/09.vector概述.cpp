/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : Vector概述
 * 
 *
 * vector类是一个模板（template），也就是说可有效地用于不同的类型。
 * 
 * 使用模板集合可以创建”任何事物的类“ ———— 把类型名输入到尖括号中，让编译器直到vector所用的类。
 * 
 * 例子：
 * 字符串string的vector表示为vector<string>。如果加入其他的类型，就会出现错误
 * 
 */

// 程序目的：复制整个文件给一个字符串的vector
#include<string>
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
    vector<string> v;
    ifstream in("test.txt");
    string line;
    while (getline(in,line))
    {
        /**
         * 向vector内添加一行新的内容，对于具体的对象要用 “.” 号来调用其成员函数
         * 
         * pull_back()向vector内添加新元素，取回元素的方式：操作符重载
         */ 
        v.push_back(line);  
    }
        /**
         * for循环的组成：
         * 
         * 第一部分 —— —— 初始化；第二部分 —— ——  检测退出循环的条件；第三部分 —— —— 改变某些内容，通常是遍历一个数据序列
         */
        for(int i = 0;i <v.size(); i++) // 添加一行数字
            cout<<i<<":"<<v[i]<<endl;
    
}
