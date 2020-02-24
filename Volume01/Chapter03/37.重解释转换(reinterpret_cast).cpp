/**
 * Date : 2020 - 02 - 23
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  重解释转换(reinterpret_cast)
 * 
 * 最不安全的转换机制，最有可能出现问题。
 * 
 * reinterpret_cast把对象假想为模式（隐藏某种目的），属于低级的位操作
 * 
 */
#include<iostream>
using namespace std;
const int sz = 100;
struct X { // 整型数组
    int a[sz];
};
void print(X* x) {
    for(int i = 0; i <sz; i++)
        cout<<x->a[i]<<' ';
    cout<<endl<<"-----------------------------"<<endl;
}

int main(void)
{
    X x;
    print(&x);
    int* xp = reinterpret_cast<int*>(&x);
    for(int* i = xp; i<xp+sz; i++)
        *i= 0;
    // 不能使用xp作为x* 这个指针，除非你转换回来
    print(reinterpret_cast<X*>(xp));
    // 使用原来的标识符
    print(&x);

}