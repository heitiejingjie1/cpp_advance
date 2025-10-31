#include "overload.h"
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

void overload_func() {
  // 自动匹配
  {
    int a = 30;
    print(a);

    float value = 30.0;
    print(value);

    print();
  }
}
void print(int value) { cout << "int value = " << value << endl; }

void print(float value) {
  cout << "float value = " << fixed << setprecision(2) << value << endl;
}

void print(const string msg) { cout << "msg = " << msg << endl; }

void type_inference() {
  // 自动推导变量类型
  {
    auto int_value = 30;
    auto float_value = 30.0f;
    auto char_value('a');
    auto *x = new auto(3);
  }

  {
    // auto a; // auto 类型必须在定义时初始化
  }
}
