#include <iostream>
#include <string>

using namespace std;

int main() {
    // 数组声明
    int arr[5];

    // 数组初始化
    // 用了一个 for 循环，对数组进行初始化，将每个元素的值设置为它的下标加一
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // 访问数组元素
    // 再次使用一个 for 循环，输出数组的每个元素及其下标。
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}

// 以下是输出字符串的
int main() {
    // 字符串数组声明
    string arr[3];

    // 字符串数组初始化
    arr[0] = "Hello";
    arr[1] = "world";
    arr[2] = "!";

    // 访问字符串数组元素
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}