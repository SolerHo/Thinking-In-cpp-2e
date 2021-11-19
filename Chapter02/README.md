<h1 align="center">第 2 章 对象创建与使用 学习笔记</h1>

### 👉【[练习题](./练习题.md)】【[面试题总结](./面试题.md)】

## 1. 语言的翻译过程

重要的标准库：输入输出流库，可以用它从文件或键盘读取数据，并且将数据写入文件和显示出来。

任何一种计算机语言都要从某种容易理解的`形式（源代码）`转化成计算机`执行的形式（机器指令）`。

翻译器分为两类：**解释器（interpreter）** 和 **编译器（compiler）**。

### 1.1 解释器
解释器将 `源代码` 转化成一些指令（可由多组机器指令组成）并立即执行这些指令。

例如：BASIC —— —— 解释性语言

解释器语言的好处：从写代码到执行代码的转换几乎立即完成，并且源代码总是现存，所以出现一旦出现错误，解释器很容易指出错误。


### 1.2 编译器
编译器将 `源代码` 转化成 `汇编语言` 或 `机器指令` 。

最终的结果：是一个或者多个机器代码的文件。

使用编译器时，从写源代码 —————— > 执行代码，是一个较长的过程。

像C语言这样，分别编译各段程序，最后使用 `连接器（Linker）` 把各段程序连接成一个完整的可执行程序，这个过程叫做 `分段编译（Separate compilation）` 。

现代编译器会使用一些 `源代码层的调试器（source-level debugger）` 的信息，以便通过跟踪程序经过源代码的进展来显示程序的执行情况。


一些编译器采用 `内存中编译（in-memory compilation）` 来提高编译速度。

**内存中编译器**：将编译器程序存放在RAM中。

大多数编译器，编译时每一步都要`读写文件` 。 

### 1.3 编译过程

有些编程语言编译时，首先要对源代码进行预处理。

**预处理器（preprocessor）**：程序员定义好的模式代替源代码中的模式。

#### 1.3.1 预处理器的作用
- 用来节省输入
- 增加代码的可读性。

#### 1.3.2 连接器
连接器（Linker）把一组目标模块连接成一个可执行程序，OS可以装载和运行它。

当某个目标模块中的函数要引用另一个目标模块中的函数或变量时，由连接器来处理这些引用。


连接器能搜索称为 “ 库 ” 的特殊文本来处理所有的引用。

库将一组目标模块包含在一个文件中。

库由一个被称为 `库管理器（librarian）` 的程序来创建和维护。


#### 1.3.3 类型检查
`类型检查（type checking）`：检查函数参数`是否准确使用`，以防止程序设计错误。

`静态类型检查（static type checking`）：在`编译阶段`完成，不是在程序运行阶段进行。

C++使用静态类型检查，是因为C++语言不采用任何特殊运行时支持来处理错误操作。

静态类型检查在编译时就会告知程序员类型被误用，从而加快了执行时的速度。


## 2. 分段编译工具

在C/C++中，可以将大程序构造出许多小程序块，小程序块容易管理、可独立测试。

程序分割的最基本的方法：`创建命名子程序`。

C和C++里面，子程序称为`函数（function）`，函数是一段代码段，将函数放在不同的文件中，并分块进行编译。

调用函数时，要传给它一些在执行时使用的`参数（argument）` ，执行完成后，就会的到一个返回值（return value）。

返回值是函数作为执行结果返回的一个值，也可以编写不带参数没有返回值的函数。

###  2.1 声明和定义
- #### 声明（declaration）
声明：是先编译器介绍名字 —— —— 标识符。“告诉编译器” 外部函数和数据的名称及它们的模样。

- #### 定义（definition）
为 `名字（也就是声明的名字）` 分配存储空间。

不管定义的是`函数`还是`变量`，编译器都会在`定义点分配存储空间`。

   - **变量**：编译器要确定 `变量的大小` ，然后在内存中开辟空间来保存变量的数据。：
   - **函数**：编译器生成代码。最终代码会占用一定的内存。

#### 2.1.1 函数声明的语法

**函数声明包括函数类型（即返回值类型）、函数名、参数列表和一个分号**

C/C++中，函数的声明就是给函数取名字，指定函数的参数类型和返回值。

```cpp
int func01(int,int);

//第一个关键字是函数返回值类型：int。参数按其使用的顺序依次排在函数后面的括号内。
```

注意点：C/C++中，声明形式和使用形式要一致。

编译器会检查函数的使用情况，然后确保参数能够接受返回值，也会检查函数的参数的类型匹配情况。

#### 2.1.2 函数的定义
函数体：一个`大括号`括起来的`语句集`。大括号表示代码的`开始` 和   `结束` 。

注意点：
- 函数定义中，大括号代替了分号的作用。
- 如果要在函数体中使用参数的话，函数定义中的参数必须有名称。

```cpp
//函数的定义
int func1(int length, int width){
    ......;
}
```

## 3. 编写第一个C++程序
```cpp
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
```

## 4. 关于输入输出流
通过（显式）类型转换（cast），任何字符都能转换成char类型（char是保存单字符的数据类型），发送到流对象。

### 4.1 字符数组的拼接
```cpp
// character array concatenation
#include <iostream>
using namespace std;

int main()
{
    cout << "This is far too long to put on a "
        "single line but it can be broken up with "
        "no ill effection\nas long as there is no\n";
    return 0;
}
```

### 4.2 读取输入数据
`cin(control input，控制台输入)`，通常是指从控制台输入，对于这类型输入可以重定向到其他的输入源。

使用 `“>>” `输入流操作符，接受与参数类型相同的输入。

```cpp
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter a decimal number:";
    cin>>number; 

    cout<<"value in octal = 0"<<oct<<number<<endl; // 八进制数
    cout<<"value in hex = 0x"<<hex<<number<<endl; // 十六进制数
    return 0;
}
```

### 4.3 调用其他程序
在Unix Shell脚本或DOS批处理文件中，使用从标准输入输出读写的程序。

标准的C语言 `system()（包含在 <stdlib> 头文件中）` 函数，C/C++程序可调用任何程序。

## 5. 字符串简介
使用string 类，需引入 `<string>` 头文件库，`string类`在声明空间`std`中，则需要使用`using指令`。

```cpp
#include <cstring>
#include <iostream>

int main()
{
    std::string s1;
    ...
    return 0;
}
```

## 6. 文件的读写
打开文件进行读写操作，必须包含`<fstream>`

为了`读`而打开文件，要创建一个`ifstream对象`，用法和cin相同

为了`写`而打开文件，要创建一个`ofstream对象`，用法和cout相同。

`getline()`函数 可以把一行`读入到string对象`中（以换行符结束）。

getline()的第一个参数是`ifstream对象`，从中读取内容，第二个参数是`stream对象`。

函数调用完毕，string对象就装载了一行内容。

```cpp
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
/* 将一个文件的内容拷贝到另一个文件的简单例子
int main()
{
    ifstream in("test.tx");
    ofstream out("test01.txt");
    string a;
    while (getline(in,a))
    {
        out<<a<<"\n";
    }
    
}
*/

/**
getline()逐行读取字符，遇到换行符终止。
 * 
 * getline()将丢弃换行符而不是把它存入string对象中。
 */

// 将整个文件拷贝成单独的一个string对象
int main()
{
    ifstream in("test.txt");
    string s,line;
    while (getline(in,line))
    {
        s += line + "\n";
        cout<<s;
    }
    
}
```
string 具有`动态性`，不必担心string的内存分配，只管添加新内容即可。string会自动扩展以保存新的输入。


## 7. vector简介
vector类是一个`模板（template）`，也就是说可有效地用于不同的类型。

使用模板集合可以创建”任何事物的类“ ———— 把类型名输入到尖括号中，让编译器直到vector所用的类。

```cpp
// 程序目的：复制整个文件给一个字符串的vector
#include<string>
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
    vector<string> v;
    ifstream in("test.txt");
    string line;
    while (getline(in,line))
    {
        /**
         * 向vector内添加一行新的内容，对于具体的对象要用 “.” 号来调用其成员函数
         * 
         * pull_back()向vector内添加新元素，取回元素的方式：操作符重载
         */ 
        v.push_back(line);  
    }
        /**
         * for循环的组成：
         * 
         * 第一部分 —— —— 初始化；第二部分 —— ——  检测退出循环的条件；第三部分 —— —— 改变某些内容，通常是遍历一个数据序列
         */
        for(int i = 0;i <v.size(); i++) // 添加一行数字
            cout<< i <<":"<< v[i] << endl;
}
```
vector是通用、灵活的“暂存器”，用来`处理对象集`。

