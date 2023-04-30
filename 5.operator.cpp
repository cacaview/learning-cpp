#include <iostream>
using namespace std;

int main() {
  // 算术运算符：从左到右
  // 优先级从高到低: () > * / % > + -
  int a = 10, b = 3;
  cout << "a + b = " << a + b << endl;  // 加法
  cout << "a - b = " << a - b << endl;  // 减法
  cout << "a * b = " << a * b << endl;  // 乘法
  cout << "a / b = " << a / b << endl;  // 整除
  cout << "a % b = " << a % b << endl;  // 取模

  // 关系运算符：从左到右
  // 优先级从高到低: () > ! > > >= < <=
  int c = 5, d = 7;
  cout << "c == d: " << (c == d) << endl;  // 相等
  cout << "c != d: " << (c != d) << endl;  // 不相等
  cout << "c < d: " << (c < d) << endl;    // 小于
  cout << "c > d: " << (c > d) << endl;    // 大于
  cout << "c <= d: " << (c <= d) << endl;  // 小于等于
  cout << "c >= d: " << (c >= d) << endl;  // 大于等于

  // 逻辑运算符：从左到右
  // 优先级从高到低: () > ! > && > ||
  bool e = true, f = false;
  cout << "e && f: " << (e && f) << endl;  // 逻辑与
  cout << "e || f: " << (e || f) << endl;  // 逻辑或
  cout << "!f: " << !f << endl;           // 逻辑非

  // 位运算符：从左到右
  // 优先级从高到低: () > ~ > << > >>
  int g = 5, h = 7;
  cout << "g & h: " << (g & h) << endl;    // 按位与
  cout << "g | h: " << (g | h) << endl;    // 按位或
  cout << "~g: " << ~g << endl;            // 按位取反
  cout << "g ^ h: " << (g ^ h) << endl;    // 按位异或
  cout << "g << 1: " << (g << 1) << endl;  // 左移
  cout << "g >> 1: " << (g >> 1) << endl;  // 右移

  // 赋值运算符：从右到左
  // 优先级从高到低: () > *= /= %= += -= <<= >>= &= ^= |=
  int i = 10;
  i += 5;  // 等价于 i = i + 5;
  cout << "i = " << i << endl;

  return 0;
}
