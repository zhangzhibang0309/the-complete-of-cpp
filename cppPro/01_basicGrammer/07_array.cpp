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

    cout << "--------" << "讲解数组名的用法" << "--------" << endl;
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

    cout << "--------" << "一维数组案例练习" << "--------" << endl;
    // 3.一维数组案例练习
    // 数组倒置
    int arr5[5] = {1, 3, 2, 4, 5};
    int start = 0;
    int end = sizeof(arr5) / sizeof(arr5[0]) - 1;
    while (start < end) {
        int temp = arr5[start];
        arr5[start] = arr5[end];
        arr5[end] = temp;

        start++;
        end--;
    }
    for (int i = 0; i < 5; ++i) {
        cout << arr5[i] << " ";
    }
    cout << endl;
    // 冒泡排序
    int arrBubb[] = {1, 5, 2, 8, -2, 33, 1, 3};
    int bubbLen = sizeof(arrBubb) / sizeof(arrBubb[0]);
    // 八个元素 排序跑bubbLen-1七趟 每趟比较j-i-1(因为i一开始等于零)
    for (int i = 0; i < bubbLen - 1; ++i) {
        for (int j = 0; j < bubbLen - i - 1; ++j) {
            if (arrBubb[j] > arrBubb[j + 1]) {
                int temp = arrBubb[j];
                arrBubb[j] = arrBubb[j + 1];
                arrBubb[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < bubbLen; ++i) {
        cout << arrBubb[i] << " ";
    }
    cout << endl;

    cout << "--------" << "二维数组的定义" << "--------" << endl;
    // 4.二维数组定义方式
    // 4.1 数据类型 数组名[行数][列数]
    int arrTD[2][3];
    arrTD[0][0] = 1;
    arrTD[0][1] = 2;
    arrTD[0][2] = 3;
    arrTD[1][0] = 4;
    arrTD[1][1] = 5;
    arrTD[1][2] = 6;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD[i][j] << " ";
        }
        cout << endl;
    }
    // 4.2 数据类型 数组名[行数][列数] = {{数据1，数据2。。}，{数据x，数据x。。}}
    int arrTD2[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD2[i][j] << " ";
        }
        cout << endl;
    }
    // 4.3 数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4。。}
    int arrTD3[2][3] = {1,
                        2,
                        3,
                        4,
                        5,
                        6}; // 自动区分行列数
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD3[i][j] << " ";
        }
        cout << endl;
    }
    // 4.4 数据类型 数组名[][列数] = {数据1，数据2，数据3，数据4。。}  但是只能省略行数 不能省略列数
    int arrTD4[][3] = {1, 2, 3, 4, 5, 6}; // 自动判断行数
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD4[i][j] << " ";
        }
        cout << endl;
    }

    cout << "--------" << "二维数组数组名用法" << "--------" << endl;
    // 5.使用二维数组的用户名--查看数组占用内存空间的情况 查看二维数组的首地址
    int arrRam[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };

    // 5.1查看内存占用情况
    cout << "二维数组占用内存空间： " << sizeof(arrRam) << endl;
    cout << "二维数组第一行占用内存： " << sizeof(arrRam[0]) << endl;
    cout << "二维数组第一个元素占用内存： " << sizeof(arrRam[0][0]) << endl;

    cout << "二维数组行数为： " << sizeof(arrRam) / sizeof(arrRam[0]) << endl;
    cout << "二维数组列数为： " << sizeof(arrRam[0]) / sizeof(arrRam[0][0]) << endl;
    // 5.2查看二维数组的首地址
    cout << "二维数组的首地址： " << (int) arrRam << endl;
    cout << "二维数组第一行首地址： " << (int) arrRam[0] << endl;
    cout << "二维数组第二行首地址： " << (int) arrRam[1] << endl;

    cout << "二维数组第一个元素首地址： " << (int) &arrRam[0][0] << endl;
    cout << "二维数组第二个元素首地址： " << (int) &arrRam[0][1] << endl;
}