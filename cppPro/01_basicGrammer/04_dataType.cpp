#include <iostream>

using namespace std;

int main() {
    cout << "----------" << "1.整型" << "----------" << endl;
    // 1.整型 以及sizeof()方法
    // 1.1短整型
    short sCount = 1; // 两个字节 -2^15-2^15-1
    cout << "sCount" << sCount << endl;
    cout << "sizeof(short):" << sizeof(short) << " sizeof(sCount)" << sizeof(sCount) << endl;
    // 1.2整型
    int iCount = 2; // 四个子节 -2^31-2^31-1
    cout << "iCount" << iCount << endl;
    cout << "sizeof(int):" << sizeof(int) << " sizeof(iCount)" << sizeof(iCount) << endl;
    // 1.3长整型
    long lCount = 3; // windows四个字节 -2^31-2^31-1    Linux四个字节（32）-- 八个子节（64）
    cout << "lCount" << lCount << endl;
    cout << "sizeof(long):" << sizeof(long) << " sizeof(lCount)" << sizeof(lCount) << endl;
    // 1.4长长整型
    long long llCount = 4; // 八个子节 -2^63-2^63-1
    cout << "llCount" << llCount << endl;
    cout << "sizeof(long long):" << sizeof(long long) << " sizeof(llCount)" << sizeof(llCount) << endl;

    cout << "----------" << "2.实型" << "----------" << endl;
    // 2.实型
    // 2.1 float
    float fCount = 3.14; // 四个字节 七位有效数字
    cout << fCount << endl;
    // 2.2 double
    double dCount = 3.14; // 八个字节 15~16位有效数字
    cout << dCount << endl;
    // 2.3 统计占用内存空间
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    // 2.4 科学计数法
    float f2 = 3e2; // 3*10^2
    float f3 = 3e-2; // 3*0.1^2
    cout << "f2: " << f2 << "\t" << "f3: " << f3 << endl;

    cout << "----------" << "3.字符型" << "----------" << endl;
    // 3.字符型
    // 1.定义字符型
    char ch = 'a';
    cout << ch << endl;
    // 2.字符型变量所占内存大小
    cout << "sizeof(char): " << sizeof(ch) << endl;
    // 3.常见错误
    // char ch2 = "b"; char要用''
    // char ch2 = 'abcde'; char只能是一个字符
    // 4.字符型变量对应ASCII编码
    // a-97
    char ch2 = 'a';
    cout << (int) ch2 << endl;

    cout << "----------" << "4.转义字符" << "----------" << endl;
    // 4.转义字符
    // \n 换行
    cout << "hello\nworld" << endl;
    // \\ 反斜杠
    cout << "\\" << endl;
    // \t 横向制表 可对齐
    cout << "hello\t aaaaa" << endl;
    cout << "he\t aaaaa" << endl;
    cout << "hellooo\t aaaaa" << endl;

    cout << "----------" << "5.字符串" << "----------" << endl;
    // 5.字符串
    // 一种是char []   另一种是string，需要头文件<string>
    // 比较简单 就不写了

    cout << "----------" << "6.bool" << "----------" << endl;
    // 6.布尔类型
    bool flag = true;
    bool flagE = false;
    // 占一个字节
}