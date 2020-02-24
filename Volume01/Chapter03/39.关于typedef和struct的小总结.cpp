/********************************************************************
 * 
 * Date : 2020 - 02 - 24
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  typedef 表示“类型定义”
 * 
 * 关键字 typedef用于为系统固有的或程序员自己定义的数据类型定义一个别名。
 * 
 * 数据类型的别名通常是大写的，也不是强制性要求
 * 
 * 语法格式：
 * typedef 原类型名 别名;
 * 
 * 例子：
 *  
 * typedef unsigned long ulong;
 * 
 * 
 * 注意点：typedef只是一种已存在的类型定义一个新的名字而已，而不是一种新的数据类型
 ********************************************************************/

#include<iostream>

#include<string>

using namespace std;

typedef struct student STU;

/********************************************************************
 * 
 * Date : 2020 - 02 - 24
 * Author : Soler HO
 * 
 * Book :Thinking in C++
 * 
 * description :  struct的总结
 * 
 * struct（结构）：把一组变量组合成一个构造的一种方式。
 * 
 * struct的声明必须以 分号 结束。
 * 
 * 在后续就演变成C++中的class对象。
 * 
 ********************************************************************/

typedef struct student
{
    long studentID; // 学号
    char studentName[10]; // 姓名
    char studentSex; // 性别
    int yearOfBirth; // 出生年 
    int score[3]; // 3 门课程的课程
}STU;
int main(void)
{
    // 创建两个实例：stu01 和 stu02
    student stu01 = {20200201,"Soler HO",'M',1995,{88,78,96}};
    student stu02 = stu01;

    cout<<"\n=============下面是C++的写法==================="<<endl;
    cout<<"\n stu02:  "<<stu02.studentID<<" "<<stu02.studentName
        <<" "<<stu02.studentSex<<" "<<stu02.yearOfBirth<<" "<<stu02.score[0]<<" "<<stu02.score[1]<<" "<<stu02.score[2]<<endl;

    cout<<endl;

    printf("\n=============下面是C语言的写法===================");

    printf("\n stu02 : %10ld %8s %3c %4d %3d %3d %3d \n",stu02.studentID,
    stu02.studentName,stu02.studentSex,stu02.yearOfBirth,stu02.score[0],stu02.score[1],stu02.score[2]);
    
    cout<<endl;


    return 0;


}




