#include "array.h"
#include <iostream>
#include <string>

using namespace std;

void display_array() {}

void defined_and_init_array() {
  // 数组维度必须是常量表达式
  unsigned cnt = 42;
  constexpr unsigned sz = 42;
  string bad[cnt]; // 错误
  int *p_arr[sz];  // 正确

  // 字符数组
  char a1[] = {'c', '+', '+'};
  char a2[] = {'c', '+', '+', '\n'};
  char a3[] = "c++";
  // char a4[2] = "c++";

  // 拷贝与赋值
  // 不允许使用一个数组拷贝或赋值给另一个数组
  {
    int arr[] = {0, 1, 2};
    // int arr2[] = arr;
    // arr2 = arr;
  }

  // 复杂的数组声明
  {
    int arr[10];
    int *parr[10]; // 指针数组
    // int &ref_arr[10]; // 不存在引用数组
    int (*p_array)[10] = &arr;  // 数组指针，指向一个数组
    int (&ref_array)[10] = arr; // 数组引用，引用一个数组
  }
}
