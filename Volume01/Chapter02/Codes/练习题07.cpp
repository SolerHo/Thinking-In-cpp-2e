/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 
 * 
 * 编写程序，一次显示文件的一行，然后，等待用户按回车后显示下一行
 * 
 */

#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
    vector<string> v;
    ifstream in("test.txt");
    string line;

    while(getline(in, line))
    {
        cout<<line<<endl;
        cin.get();
    }
    cout<<"没有了，结束了！拜拜"<<endl;
    return 0;
}

