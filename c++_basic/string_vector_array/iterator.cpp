#include "iterator.h"
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display_iterator() {
  use_iterator();
  type_iterator();
}

void use_iterator() {
  string s("some thing");
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *it = toupper(*it);
  }

  cout << s << endl;

  for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
    *it = toupper(*it);
  }
  cout << s << endl;
}

void type_iterator() {
  // 迭代器类型
  {
    // 能读能写类型 iterator
    vector<int>::iterator it;
    string::iterator it2;

    // 只读类型 const_iterator
    vector<int>::const_iterator cit;
    string::const_iterator cit2;

    // 如果vector对象或string对象是常量，则只能使用const_iterator类型，反之则可使用以上两种类型
  }

  // 测试迭代器
  {
    vector<int> it{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto i = it.begin(); i != it.end(); ++i) {
      *i = (*i) * 2;
    }

    for (auto i : it) {
      cout << i << endl;
    }
  }
}

void arithtic_iterator() {}
