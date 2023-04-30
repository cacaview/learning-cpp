#include <iostream>
#include <string>

using namespace std;

int main() {
  // 布尔型
  bool is_true = true;
  bool is_false = false;

  // 字符型
  char my_char = 'a';

  // 整形
  int my_int = 42;

  // 浮点型
  float my_float = 3.14f;

  // 双精度浮点型
  double my_double = 3.1415926535;

  // 无类型指针
  void* my_void_pointer = nullptr;

  // 字符串型
  string my_string = "Hello, world!";

  // 输出各个变量的值
  cout << "布尔型： " << is_true << ", " << is_false << endl;
  cout << "字符型： " << my_char << endl;
  cout << "整形： " << my_int << endl;
  cout << "浮点型： " << my_float << endl;
  cout << "双精度浮点型： " << my_double << endl;
  cout << "无类型指针： " << my_void_pointer << endl;
  cout << "字符串型： " << my_string << endl;

  // 输入不同类型的变量值
  bool my_bool_input;
  cout << "请输入一个布尔型的值（1 代表 true，0 代表 false）：";
  cin >> my_bool_input;

  char my_char_input;
  cout << "请输入一个字符：";
  cin >> my_char_input;

  int my_int_input;
  cout << "请输入一个整数：";
  cin >> my_int_input;

  float my_float_input;
  cout << "请输入一个浮点数：";
  cin >> my_float_input;

  double my_double_input;
  cout << "请输入一个双精度浮点数：";
  cin >> my_double_input;

  string my_string_input;
  cout << "请输入一个字符串：";
  cin >> my_string_input;

  // 输出输入的变量值
  cout << "您输入的布尔型值是：" << my_bool_input << endl;
  cout << "您输入的字符是：" << my_char_input << endl;
  cout << "您输入的整数是：" << my_int_input << endl;
  cout << "您输入的浮点数是：" << my_float_input << endl;
  cout << "您输入的双精度浮点数是：" << my_double_input << endl;
  cout << "您输入的字符串是：" << my_string_input << endl;

  return 0;
}
/*
请注意，在输入字符串时，我们使用了 cin 进行输入。然而，这种方式只能输入一个单词，如果需要输入含有空格的字符串，我们需要使用 getline() 函数。
string my_string_input;
cout << "请输入一个字符串：";
getline(cin, my_string_input);
在这种情况下，getline() 函数会读取一行输入，直到遇到换行符为止，并将整行文本存储在 my_string_input 变量中。
*/