//
// 这里开始学习array，虽然很基本，有一些细节需要注意，所以我还是决定仔细学习一下。
//
#include <iostream>

using namespace std;

int main() {
    // 1.三种定义方式
    // 1.1数据类型 数组名[数组长度];
    int arr1[5];
    arr1[0] = 0;
    arr1[1] = 1;
    arr1[2] = 2;
    arr1[3] = 3;
    arr1[4] = 4;
    cout << arr1[1] << endl;

    // 1.2数据类型 数组名[数组长度] = {值1，值2，值3。。};
    int arr2[5] = {00, 11, 22, 33, 44,};
    cout << arr2[3] << endl;

    // 1.3数据类型 数组名[] = {值1，值2，值3。。。。};
    int arr3[] = {000, 111, 222, 333, 444, 555, 666, 777, 888};
    cout << arr3[2] << endl;

    // 2.数组名的用法--统计数组占用内存 查看数组首地址
    // 2.1查看占用内存情况
    int arr4[5] = {1, 2, 3, 4, 5};
    cout << "整个数组占用内存空间为： " << sizeof(arr4) << endl;
    cout << "每个元素占用内存空间为： " << sizeof(arr4[0]) << endl;
    cout << "数组种元素的个数为： " << sizeof(arr4) / sizeof(arr4[0]) << endl;
    // 2.2查看数组首地址
    cout << "数组首地址为： " << (int) arr4 << endl;
    cout << "数组第一个元素地址为： " << (int) &arr4[0] << endl;
    cout << "数组第二个元素地址为： " << (int) &arr4[1] << endl;

    cout<<"--------"<<"一维数组案例练习"<<"--------";
    // 3.一维数组案例练习
    // 数组倒置
    int arr5[5] = {1, 3, 2, 4, 5};
    int start = 0;
    int end = sizeof(arr5) / sizeof(arr5[0]) - 1;
    for (int i = 0; i < (end + 1) / 2; ++i) {
        int temp;
        temp = arr5[i];
        arr5[i] = arr5[end - i];
        arr5[end - i] = temp;
    }
    for (int i = 0; i < end + 1; ++i) {
        cout<<arr5[i]<<" ";
    }

}

