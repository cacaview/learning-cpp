#include <iostream>
using namespace std;

// 全局变量
int global_variable = 100;

int main() {
  // 局部变量
  int local_variable = 42;

  // 输出全局变量和局部变量的值
  cout << "全局变量的值为：" << global_variable << endl;
  cout << "局部变量的值为：" << local_variable << endl;

  // 修改全局变量的值
  global_variable = 200;

  // 输出修改后的全局变量的值
  cout << "修改后的全局变量的值为：" << global_variable << endl;

  // 定义一个代码块
  {
    // 在代码块内部定义一个局部变量
    int block_variable = 123;

    // 输出代码块内部和外部的变量值
    cout << "代码块内部的变量值为：" << block_variable << endl;
    cout << "代码块外部的局部变量值为：" << local_variable << endl;
    cout << "代码块外部的全局变量值为：" << global_variable << endl;
  }

  // 此时代码块内部定义的变量已经超出作用域
  // 因此无法在此处访问它，以下代码会导致编译错误
  // cout << "代码块内部的变量值为：" << block_variable << endl;

  return 0;
}
