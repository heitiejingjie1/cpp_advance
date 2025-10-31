#include "static_demo.h"
#include <iostream>

using namespace std;

int Student::count_num_ = 0; // 静态变量定义性说明

Student::Student() { ++count_num_; }

Student::~Student() { --count_num_; }

int Student::Get_Count_Num() { return count_num_; }

void Display() { cout << Student::Get_Count_Num() << endl; }
