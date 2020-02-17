/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 文件的读写
 * 
 */

/** 块注释
 * 打开文件进行读写操作，必须包含<fstream>
 * 
 * 
 * 为了读而打开文件，要创建一个ifstream对象，用法和cin相同
 * 
 * 为了写而打开文件，要创建一个ofstream对象，用法和cout相同。
 * 
 * getline()函数 可以把一行读入到string对象中（以换行符结束）。
 * 
 * getline()的第一个参数是ifstream对象，从中读取内容，第二个参数是stream对象。
 * 
 * 函数调用完毕，string对象就装载了一行内容。
 * 
 */


#include<iostream>
#include<fstream>
#include<string>

using namespace std;
/* 将一个文件的内容拷贝到另一个文件的简单例子
int main()
{
    ifstream in("test.tx");
    ofstream out("test01.txt");
    string a;
    while (getline(in,a))
    {
        out<<a<<"\n";
    }
    
}

*/

/**
 * getline()逐行读取字符，遇到换行符终止。
 * 
 * getline()将丢弃换行符而不是把它存入string对象中。
 *
 */


// 将整个文件拷贝成单独的一个string对象
int main()
{
    ifstream in("test.txt");
    string s,line;
    while (getline(in,line))
    {
        s += line + "\n";
        cout<<s;
    }
    
}

// string 具有动态性，不必担心string的内存分配，只管添加新内容即可。
// string会自动扩展以保存新的输入

