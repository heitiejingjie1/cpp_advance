#include "encapsulation_inlining_func.h"
#include <iostream>

using namespace std;

void encapsulation() {
  permission();
  inline_func();
}

void permission() {
  A aa;
  // aa.func(2); // 权限的语法检查在编译之后
  cout << aa.get_a() << endl;
}

void inline_func() {
  cout << max(30, 78) << endl; // 与下等价
  int a = 30;
  int b = 78;
  cout << (a > b ? a : b) << endl;
}
