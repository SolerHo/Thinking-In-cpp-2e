/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : switch语句实现菜单系统
 * 
 * switch语句 —— 实现多路选择的一种方式
 * 
 * 
 * 语法格式：
 * 
 * switch (expression)
 * {
 *      case 常量表达式:
 *              语句状态
 *              break;
 * 
 *      default:
 *           break;
 * }
 * 
 *
 *  选择器（selector） —— 一个产生整数值的表达式
 * 
 * switch语句把选择器的结果和每一个整数值比较，如果匹配，就执行相对应的语句，不匹配，就执行default语句。
 * 
 * 如果要使用一个字符串类型的对象作为一个选择器，在switch中不能使用，只能使用if语句。
 * 
 */


// 继续使用菜单程序的例子
#include<iostream>

using namespace std;

int main()
{
    bool quit = false;  // 停止的标志
    while (quit== false)
    {
        cout<<"选择a，b，c，或者是q停止键：";
        char response;
        cin>>response;
        switch (response)
        {
        case 'a':
            cout<<"你选择了a键"<<endl;
            break;
        case 'b':
            cout<<"你选择了b键"<<endl;
            break;
        case 'c':
            cout<<"你选择了c键"<<endl;
            break;
        case 'q':
            cout<<"停止菜单"<<endl;
            break;  
        default:
            cout<<"请重新选择你要进行的菜单键："<<endl;
            break;
        }
    }
    
}


