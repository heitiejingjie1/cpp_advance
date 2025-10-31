#include "vector.h"
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display_vector() {
  define_and_initialize_vector();
  // add_element();
  // operator_vector();
  test_vector();
}

void define_and_initialize_vector() {
  /*
   * 初始化vector
   * */
  {
    vector<string> svec;         // 默认初始化
    vector<string> svec2 = svec; // 将svec元素拷贝给svec2
    vector<string> svec3(svec2); // 与上同

    // 列表初始化
    vector<string> svec4{"hello", "world", "!"};
    vector<string> svec5(10, "hi");
    for (auto s : svec4) {
      cout << s << endl;
    }

    // 初始值还是元素数量
    vector<int> ivec(10, 1);  // 包含10个元素，值全为1
    vector<int> ivec2{10, 1}; // 包含2个元素，
  }
}

// void add_element() {
//   // 自定义添加元素
//   {
//     vector<int> ivec;
//     for (int i = 0; i < 100; ++i) {
//       ivec.push_back(i);
//     }
//     for (auto i : ivec) {
//       cout << i << endl;
//     }
//   }
//
//   // 标准输入读取元素，存入vector元素
//   {
//     string word;
//     vector<string> text;
//     while (cin >> word) {
//       text.push_back(word);
//     }
//     for (auto str : text) {
//       cout << str << endl;
//     }
//   }
// }

void operator_vector() {
  // 索引
  {
    unsigned grade;
    vector<unsigned> scores(11, 0);
    while (cin >> grade) {
      if (grade <= 100) {
        ++scores[grade / 10];
      }
    }

    for (auto s : scores) {
      cout << s << endl;
    }
  }
}

void test_vector() {
  string word;
  vector<string> text;
  while (cin >> word) {
    text.push_back(word);
  }
  for (auto &str : text) {
    for (auto &s : str) {
      s = toupper(s);
    }
    cout << str << endl;
  }
}
