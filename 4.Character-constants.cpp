#include <iostream>
using namespace std;

int main() {
  // 输出字符常量
  cout << "字符常量为：" << 'A' << endl;

  // 定义字符常量变量
  char char1 = 'B';
  cout << "字符常量变量为：" << char1 << endl;

  // ASCII 码转换
  cout << "字符常量的 ASCII 码为：" << int('A') << endl;

  // 通过 ASCII 码定义字符常量
  char char2 = 65;
  cout << "ASCII 码为 65 的字符常量为：" << char2 << endl;

  return 0;
}
