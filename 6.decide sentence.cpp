/*
 * 这是一个C++判断语句的示例程序，包括if语句、if...else语句、嵌套if语句、switch语句和嵌套switch语句。
 */

#include <iostream>

using namespace std;

int main()
{
    int num = 75;

    // if语句
    if (num > 50) {
        cout << "num is greater than 50." << endl;
    }

    // if...else语句
    if (num < 50) {
        cout << "num is less than 50." << endl;
    } else {
        cout << "num is greater than or equal to 50." << endl;
    }

    // 嵌套if语句
    if (num < 100) {
        cout << "num is less than 100." << endl;

        if (num > 50) {
            cout << "num is between 50 and 100." << endl;
        } else {
            cout << "num is less than or equal to 50." << endl;
        }
    }

    // switch语句
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Well done" << endl;
            break;
        case 'D':
            cout << "You passed" << endl;
            break;
        case 'F':
            cout << "Better try again" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    // 嵌套switch语句
    int x = 2, y = 4;
    char op = '+';

    switch (op) {
        case '+':
            cout << "x + y = " << x + y << endl;
            break;
        case '-':
            cout << "x - y = " << x - y << endl;
            break;
        case '*':
            cout << "x * y = " << x * y << endl;
            break;
        case '/':
            switch (y) {
                case 0:
                    cout << "Cannot divide by zero" << endl;
                    break;
                default:
                    cout << "x / y = " << x / y << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
