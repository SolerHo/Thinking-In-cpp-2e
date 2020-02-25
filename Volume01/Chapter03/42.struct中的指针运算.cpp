/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  struct中的指针运算
 * 
 * 指针算术的技巧：编译器计算出指针改变的正确值，使它指向数组中的下一个元素（指针算术只有在数组中才是有意义的）
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

typedef struct{
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
}Primitives;

int main()
{
    Primitives p[10];
    Primitives* pp = p;
    cout<<"sizeof(Primitives) = "<<sizeof(Primitives)<<endl;
    cout<<"pp = "<<(long)pp<<endl;
    pp++;
    cout<<"pp = "<<(long)pp<<endl;

}