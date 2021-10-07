//
// 最终教条--指针补完计划
//
#include "iostream"

using namespace std;

void swap2(int *p1, int *p2);

void bubbleSort(int *arr, int len);

int main() {
    // 1.指针的定义
    int a = 10;
    // 指针定义的语法 数据类型 * 指针变量名；
    int *p;
    // 让指针记录变量a的地址
    p = &a;
    cout << "a的地址为： " << &a << endl;
    cout << "指针p为： " << p << endl;

    // 2.使用指针
    // 可以通过解引用的方式来找到指针指向的内存
    // 指针前加*代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;

    // 3.查看指针所占内存空间
    // 在32位操作系统下 所有的指针都占用4bytes
    // 64位操作系统占用8bytes
    cout << sizeof(int *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;
    cout << sizeof(char *) << endl;

    // 4.空指针
    // 空指针是用于初始化指针变量的 指向的内存地址为0
    // int *p4 = NULL;
    // 空指针指向的内存不能访问 因为0-255的内存空间是系统占用的 都不能去使用
    // cout << *p4;  内存地址0是不能去操作的

    // 5.野指针
    // 野指针就像下面这样 没有申请一块内存 直接把一个指针指向一块非法内存
    // int *p5 = (int *) 0x1100;
    // cout << *p5 << endl;

    cout << "----------" << "const修饰" << "----------" << endl;
    // 6.const修饰
    // const修饰指针 常量指针
    int a6 = 10;
    int b6 = 10;
    const int *p6 = &a6; // 指针指向的值不可以改，指针的指向可以改
    // *p6 = 20; 指向的值不可以改
    p6 = &b6; // 指向可以改
    cout << *p6;
    // const修饰常量 指针常量
    int *const p66 = &a6;
    *p66 = 20; // 指向的值可以改
    // p66 = &b6; 指向不可以改
    cout << *p66 << endl;
    // const既修饰指针又修饰常量
    const int *const p666 = &a6;
    // *p666 = 20; 不能修改指向的内存的值
    // p666 = &b6; 不能修改指向的地址

    cout << "----------" << "指针和数组" << "----------" << endl;
    // 7.指针和数组
    int arr7[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *p7 = arr7;
    cout << arr7[0] << endl;
    cout << *p7 << endl;
    cout << *p7 + 1 << endl;

    cout << "----------" << "指针和函数" << "----------" << endl;
    // 8.指针和函数
    int a8 = 10, b8 = 20;
    cout << "a8= " << a8 << " " << "b8= " << b8 << endl;
    swap2(&a8, &b8);
    cout << "a8= " << a8 << " " << "b8= " << b8 << endl;

    cout << "----------" << "函数实现冒泡排序（需要传递地址 指针接收）" << "----------" << endl;
    // 9.冒泡排序function
    int arr9[10] = {1, 4, 2, 5, 10, 232, 22, 0, -3, 11};
    int len = sizeof(arr9) / sizeof(arr9[0]);
    bubbleSort(arr9, len);
    for (int i = 0; i < len; ++i) {
        cout << arr9[i] << " ";
    }
    cout << endl;
}

void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
