#ifndef _TEST_H
#define _TEST_H
#include <cstring>

class Test {
private:
  int num_;
  // const int ID_;
  // int &refnum_;

public:
  enum MyEnum {
    enum_a,
    enum_b,
  };

public:
  Test(int val);
  Test();
  // 拷贝构造函数
  Test(const Test &other);

public:
  ~Test();

public:
  Test &operator=(const Test &other); // 重载操作符
};

class String {
private:
  char *str_;

public:
  String();
  String(char *str);
  String(const String &other);
  String &operator=(const String &other);

public:
  ~String();

public:
  void print();

private:
  char *allocAndcpy(char *str = "") {

    int len = strlen(str) + 1;
    str_ = new char[len];
    memset(str_, 0, len);
    strcpy(str_, str);
    return str_;
  }
};

void display();
#endif // !_TEST_H
