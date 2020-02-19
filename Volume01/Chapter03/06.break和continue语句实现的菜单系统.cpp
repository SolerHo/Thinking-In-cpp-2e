/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : break 和 continue语句实现的菜单系统
 *
 * 
 * break语句退出循环，不再执行循环中的剩余语句。
 * 
 * continue语句停止执行当前的循环，返回到循环的起始位置开始新的一轮循环。
 * 
 */

// break语句和 continue语句实现的菜单系统

#include<iostream>

using  namespace std;

int main()
{
    char c;
    while (true) // 等价于永远执行该循环
    {
        cout<<"主要菜单："<<endl;
        cout<<"l:左,r:右,q:停 ——————>";
        cin>>c;
        if (c=='q')
            break;
        if (c=='l')
        {
            cout<<"左键菜单："<<endl;
            cout<<"选择a或者b：";
            cin>>c;
            if (c == 'a')
            {
                cout<<"你选择了a"<<endl;
                continue; // 返回主菜单
            }
            if (c=='b')
            {
                cout<<"你选择了b"<<endl;
                continue; // 返回主菜单
            }
            else
            {
                cout<<"你没有选择a或者是b键"<<endl;
                continue; // 返回主菜单
            }  
        }
        if (c=='r')
        {
            cout<<"右键菜单："<<endl;
            cout<<"选择c或者是d：";
            cin>>c;
            if (c=='c')
            {
                cout<<"你选择了c键"<<endl;
                continue; // 返回主菜单
            }
            if (c == 'd')
            {
                cout<<"你选择d键"<<endl;
                continue;// 返回主菜单
            }
            else
            {
                cout<<"你没有选择c或d"<<endl;
                continue; // 返回主菜单
            }
            
        }
        cout<<"你必须输入l或者r或者是q"<<endl;
        
    }
    cout<<"停止菜单"<<endl;
    
}
