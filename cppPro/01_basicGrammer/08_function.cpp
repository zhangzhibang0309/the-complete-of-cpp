//
// 这里复习一下函数的用法
//
#include <iostream>
#include "headerDocument/swap2.h" // 引入自定义头文件

using namespace std;

int add(int num1, int num2) { // 函数定义参数列表是形参
    return num1 + num2;
}

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "函数调用中： " << "num1： " << num1 << "num2: " << num2 << endl;
}

// 函数声明
void sayHi();

void sayHi(); // 函数定义只能有一次 但是声明可以多次
//void swap2(int a1,int a2);
int main() {
    // 1.函数的定义并调用
    int num1 = 1, num2 = 2;
    cout << add(num1, num2) << endl; // 传入的才是实参

    // 2.值传递
    // 值传递的时候，形参怎么变化，都不会影响实参
    cout << "函数调用前： " << "num1： " << num1 << "num2: " << num2 << endl;
    swap(num1, num2);
    cout << "函数调用后： " << "num1： " << num1 << "num2: " << num2 << endl;
    // 这个的原理就是形参也是在内存里面开辟了新的空间，而不仅仅是指向实参的地址，所以不同的地址的值发生改变，二者没有影响。

    // 3.函数声明
    // 一般来说 函数必须写在调用函数的位置之前 但是如果有了函数声明 函数定义就可以在调用之后
    sayHi();

    // 4.自定义头文件
    cout << "----------" << "调用自定义头文件中的函数" << "----------" << endl;
    int a = 2, b = 3;
    swap2(a, b);
}

void sayHi() {
    cout << "hello" << endl;
}