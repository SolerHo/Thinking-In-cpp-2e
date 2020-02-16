/**
 * Date : 2020 - 02 - 16
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 第一个C++程序 hello world
 * 
 */
#include<iostream> // 使用iostream类
/**名字空间namespace
 * 
 * 关键字：namespace
 * 
 * 库或程序中的每一个C++定义集被封装在一个名字空间中，如果其他的定义中有相同的名字，但在不同的名字空间，就不爱发生冲突。
 *
 * 所有的标准C++库都封装在一个名字空间中，即“std” (代表“standard”)。
 * 
 */
using namespace std; // using 就是要使用名字空间中的声明或定义。


int main()
{
    cout<< "hello world"<<endl; 
    /**
     * 通过“<<”操作符把一系列的参数传递给cout对象
     * 然后cout对象按从左向右的顺序将参数打印出来。
     * 
     * 输入流输出流函数endl表示一行结束并在行尾加上一个换行符。
     * 
     * C语言中，使用 双引号 括起来的叫做 “字符串（string）”。标准的C++类库有一个专门用于正文处理的string类库。
     * 
     */

    return 0;
}

