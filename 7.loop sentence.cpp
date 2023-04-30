// 本程序演示了C++中的循环类型和循环控制语句
// 包括while、do-while、for循环以及break、continue、goto语句

#include <iostream>

using namespace std;

int main() {
    int i = 1;

    // while循环
    cout << "while循环：" << endl;
    while (i <= 5) {
        cout << i << endl;
        i++;
    }

    // do-while循环
    cout << "do-while循环：" << endl;
    i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 5);

    // for循环
    cout << "for循环：" << endl;
    for (i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    // break语句
    cout << "break语句：" << endl;
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        cout << i << endl;
    }

    // continue语句
    cout << "continue语句：" << endl;
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << i << endl;
    }

    // goto语句
    // goto语句实现的无限循环
    cout << "goto语句：" << endl;
    i = 1;
    loop:
    cout << i << endl;
    i++;
    if (i <= 5) {
        goto loop;
    }

    return 0;
}
