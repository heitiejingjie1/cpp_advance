#include "static_demo.h"
#include <iostream>
#include <string>

using namespace std;

void Display() {
  cout << Student::Get_Count_Num() << endl;

  const Const_Test ct;
  ct.GetCount();
  // ct.print();  // 不能调用非const成员函数

  // 友元
  {
    Television tv;
    Telecontroller tc;

    tc.volume_up(tv);
  }

  {
    string s;
  }
}

int Student::count_num_ = 0; // 静态变量定义性说明

Student::Student() { ++count_num_; }

Student::~Student() { --count_num_; }

int Student::Get_Count_Num() { return count_num_; }

int Const_Test::GetCount() const {
  // count = 10;   // 无法修改成员变量
  cout << "count = " << count_ << endl;
  num_ = 30;
  return count_;
}

void Telecontroller::channel_down(Television &tv) { tv.channel--; }
void Telecontroller::channel_up(Television &tv) { tv.channel++; }
void Telecontroller::volume_down(Television &tv) { tv.volume--; }
void Telecontroller::volume_up(Television &tv) { tv.volume++; }
