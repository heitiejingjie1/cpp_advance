#include "begin.h"
#include <iostream>

using namespace std;

void Student::print() {
  cout << "list_id1 = " << this->list_id1 << endl;
  cout << "list_id2 = " << this->list_id2 << endl;
}

void constructor_test() {
  // 构造函数
  {
    Student stu1(20251030);
    Student stu2 = Student(20251030);
    auto stu3 = new Student(20251030);
  }

  // 初始化列表
  {
    Student test(100);
    test.print();
  }
}
