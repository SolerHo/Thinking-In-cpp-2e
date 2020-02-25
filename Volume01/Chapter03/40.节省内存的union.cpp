/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  节省内存的union
 * 
 * 对于使用同一个变量处理不同的数据类型，如下两种选择：
 * 
 * 1.创建一个struct，其中包含需要存储的所有可能的不同的类型
 * 2.使用union（联合），union可以吧所有的数据放入一个单独的空间内，计算出放在union中
 * 最大的项所需的空间数，并生成union的大小，使用union可以节省内存。
 *
 * 所有的union的地址是一样的（在类和struct中，地址是不同的）。
 * 
 * 注意点：在union中声明某个数据类型的多个实例是没有意义的（除非是不同的名字）。
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

union packed{
    char i;
    short j;
    int k;
    long l;
    float f;
    double d; // double是联合体中最大的元素
};

int main(void)
{
    // 编译器根据所选择的联合的成员执行适当的赋值
    cout<<"联合体packed的大小为："<<sizeof(packed)<<endl;

    packed x;
    x.i = 'c';
    cout<<x.i<<endl;
    x.d = 3.14159;
    cout<<x.d<<endl;
    x.f = 2.222;
    cout<<x.i<<endl; // 输出的结果是无用的，而且是一个问号
}