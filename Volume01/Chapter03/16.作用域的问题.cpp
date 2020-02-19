/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 作用域问题
 * 
 * 作用域由变量所在的最近一堆括号确定。
 * 
 * 变量的有效作用域从它的定义点开始，到和定义变量之前最近邻的开括号配对的第一个闭括号。
 * 
 */

#include<iostream>

using namespace std;

int main(){
    {
    int q = 0;
    
    for(int i = 0;i<100;i++){
        q++;
        int p = 12;
    }
    int p = 1;
}
cout<<"Type characters:"<<endl;
while (char c = cin.get()!='q')
{
    cout<<c<<"Wasn't it"<<endl;
    if(char x =c == 'a' || c == 'b')
        cout<<"You typed a or b"<<endl;
    else
        cout<<"You typed"<<x<<endl;
    
}
cout<<"Type A,B or C"<<endl;
switch (int i = cin.get())
{
case 'A':
    cout<<"Snap"<<endl;
    break;
case 'B':
    cout<<"Crackle"<<endl;

case 'C':
    cout<<"Pop"<<endl;    
default:
    cout<<"Not A,B or C"<<endl;
    break;
}

}




