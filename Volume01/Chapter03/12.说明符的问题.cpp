/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :
 * 
 * 说明符（specifier）用于改变基本内建类型的含义的集合，四种说明符：long、short、signed和unsigned
 * 
 * long和short修改数据类型具有的最大值和最小值。
 * 
 * 整数类型的大小等级：short int、int、long int。
 * 
 * 
 * 浮点数的大小等级：float、double和long double
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short iis;
    unsigned short int isu;
    unsigned short iisu;
    long int il;
    long iil;
    unsigned long int ilu;
    unsigned long iilu;
    float f;
    double d;
    long double ld;
    cout<<"\n char = "<<sizeof(c)
        <<"\n unsigned char = "<<sizeof(cu)
        <<"\n int = "<<sizeof(iu)
        <<"\n unsigned int = "<<sizeof(iu)
        <<"\n short = "<<sizeof(is)
        <<"\n unsigned short = "<<sizeof(isu)
        <<"\n long = "<<sizeof(il)
        <<"\n unsigned long = "<<sizeof(ilu)
        <<"\n float = "<<sizeof(f)
        <<"\n double = "<<sizeof(d)
        <<"\n long double = "<<sizeof(ld)
        <<endl;
}

