/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 获取单词GetWords
 * 
 */

#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
    vector<string> words;
    ifstream in("GetWords.cpp");
    string word;
    while (in >> word) // 
    {
        words.push_back(word);
    for(int i = 0 ;i <= words.size();i++)
        cout<<words[i]<<endl;
    }

    return 0;
}