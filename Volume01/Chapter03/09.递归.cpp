/**
 * Date : 2020 - 02 - 18
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description : 递归
 * 
 * 
 */

#include<iostream>

using namespace std;

void removeHat(char cat){
    for(char c = 'A';c<cat;c++)
        cout<<" ";
    if(cat<='z'){
        cout<<"cat"<<cat<<endl;
        removeHat(cat+1);
    }else
    {
        cout<<"VOOM!!!!"<<endl;
    }
    
}

int main()
{
    removeHat('A');
}


