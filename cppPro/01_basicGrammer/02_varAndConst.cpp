#include <iostream>

using namespace std;

#define Day 7 // 宏定义

int main() {
    // 变量和常量
    // 1定义变量的方式 -- 变量类型 变量名
    int count = 10;
    cout << count << endl;

    // 2定义常量的方式
    // 2.1宏定义 定义在main上面
    cout << "一周" << Day << "天";
    cout << endl;
    // Day = 100;  常量 不能修改 会报错

    // 2.2const修饰的变量也是常量
    const int year = 365;
    cout << "一年有" << year << "天" << endl;
    // year = 366 常量不能修改
}