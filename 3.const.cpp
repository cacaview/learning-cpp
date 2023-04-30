#include <iostream>
using namespace std;

int main() {
  // 定义整型常量
  const int num1 = 10;
  cout << "num1 的值为：" << num1 << endl;

  // 定义双精度浮点型常量
  const double num2 = 3.14159;
  cout << "num2 的值为：" << num2 << endl;

  // 定义字符常量
  const char char1 = 'A';
  cout << "char1 的值为：" << char1 << endl;

  // 定义字符串常量
  const string str1 = "Hello, world!";
  cout << "str1 的值为：" << str1 << endl;

  // 尝试修改常量的值会导致编译错误，以下代码会报错
  // num1 = 20;
  // num2 = 2.71828;
  // char1 = 'B';
  // str1 = "Hello, ChatGPT!";

  return 0;
}
