/**
 * Date : 2020 - 02 - 23
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  浮点格式的探究
 * 
 */
#include<iostream>
#include<cstdlib>
using namespace std;

void printBinary(const unsigned char val);

int main(int argc, char* argv[])
{
    if(argc!=2)
    {
        cout<<"必须提供一个数字"<<endl;
        exit(1);
    }
    double d = atof(argv[1]);
    unsigned char* cp = reinterpret_cast<unsigned char*>(&d); // reinterpret_cast（重解释转换）:不安全的转换机制
    for(int i = sizeof(double);i>0;i-=2)
    {
        printBinary(cp[i-1]);
        printBinary(cp[i]);
    }
    
}
void printBinary(const unsigned char val)
{
    for(int i = 7;i>=0;i--)
        if(val&(1<<i)) // << 移位运算符
            cout<<"1";
        else
            cout<<"0";
}