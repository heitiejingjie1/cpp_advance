#include "test.h"
#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

Test::Test(int val) : num_(val) {
  // num_ = val;
  cout << "initialize " << num_ << endl;
}

// Test::Test() : num_(0), ID_(0), refnum_(0) {
//   cout << "initialize " << num_ << endl;
// }

Test::Test(const Test &other) : num_(other.num_) {}

Test::~Test() { cout << "destroy " << num_ << endl; }

Test &Test::operator=(const Test &other) {
  num_ = other.num_;
  cout << "operator = " << endl;
  return *this;
}

String::String() { str_ = allocAndcpy(); }

String::String(char *str) { str_ = allocAndcpy(str); }

String::String(const String &other) { str_ = allocAndcpy(other.str_); }

String &String::operator=(const String &other) {
  if (this == &other)
    return *this;

  delete[] str_;

  str_ = allocAndcpy(other.str_);

  return *this;
}

String::~String() { delete[] str_; }

void String::print() { cout << str_ << endl; }

void display() {
  // Test t(20);
  // t = 30;
  // cout << t.enum_a << endl;

  // Test t2(10);
  // t = t2;
  // cout << t2.enum_b << endl;
  //

  String s1("aaa");
  s1.print();
  String s2 = s1;

  String s3("bbb");
  s3 = s2;
  s3.print();
}
