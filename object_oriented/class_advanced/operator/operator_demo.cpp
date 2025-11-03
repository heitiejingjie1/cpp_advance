#include "operator_demo.h"
#include <iostream>

using namespace std;

void display() {
  // 自增 自减
  {
    Test t(10);
    cout << t.GetNum() << endl;
    ++t;
    cout << t.GetNum() << endl;

    Test t2 = t++;
    cout << t2.GetNum() << endl;
    cout << t.GetNum() << endl;

    Test t3 = t--;
    cout << t3.GetNum() << endl;
    cout << t.GetNum() << endl;
  }

  // 非运算符
  {
    Test t(1);
    cout << t.GetNum() << endl;
    int num = !t;
    cout << num << endl;

    int value = 10;
    cout << !value << endl;
  }
}

Test::Test(int num) : num_(num) { cout << "Test(num) ....." << endl; }
Test::~Test() { cout << "~Test() ....." << endl; }

int Test::GetNum() const { return num_; }

Test &Test::operator++() {
  ++num_;
  return *this;
}

Test Test::operator++(int) {
  Test temp = *this;
  ++num_;
  return temp;
}

Test &Test::operator--() {
  --num_;
  return *this;
}

Test Test::operator--(int) {
  Test temp = *this;
  --num_;
  return temp;
}

int Test::operator!() { return !num_; }
