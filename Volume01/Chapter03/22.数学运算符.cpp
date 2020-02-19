/**
 * Date : 2020 - 02 - 19
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 数学运算符
 * 
 * 数学运算符：加（+）、减（-）、乘（*）、除（/）、取模（%）。
 * 
 * 
 * 赋值操作 “=” 取右边的值把它拷贝给左边。
 * 
 * 右边可以是任意的常量、变量或能产生值的表达式，但是左边必须是一个明确命名宁德变量。
 * 
 */


// 使用宏定义PRINT()可以节省输入（避免输入错误）。
// 使用大写字母来命名预处理。

#include<iostream>

using namespace std;

/**使用宏定义PRINT()可以节省输入（避免输入错误）。
 * 
 * 使用大写字母来命名预处理。
 * 
 */
#define PRINT(STR,VAR) \
    cout<<STR<<"="<<VAR<<endl;

int main()
{
    int i,j,k;
    float u,v,w;
    cout<<"请输入一个整数：";
    cin>>j;
    cout<<"请输入另外一个整数：";
    cin>>k;
    PRINT("j",j);
    PRINT("k",k);

    i = j + k;PRINT("j+k",i);
    i = j - k;PRINT("j-k",i);
    i = j * k;PRINT("j*k",i);
    i = j / k;PRINT("j/k",i);
    i = j % k;PRINT("j%k",i);

    j %= k;PRINT("j%=k",j);

    cout<<"请输入一个浮点数：";
    cin>>v;

    cout<<"请输入第二个浮点数：";
    cin>>w;

    PRINT("v",v);PRINT("w",w);
    
    u = v + w;PRINT("v + w",u);
    u = v - w;PRINT("v - w",u);
    u = v * w;PRINT("v * w",u);
    u = v / w;PRINT("v / w",u);

    PRINT("u",u);PRINT("v",v);

    u += v;PRINT("u +=v",u);
    u -= v;PRINT("u -=v",u);
    u *= v;PRINT("u *=v",u);
    u /= v;PRINT("u /=v",u);
}
