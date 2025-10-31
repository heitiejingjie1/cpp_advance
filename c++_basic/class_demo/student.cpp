#include "student.h"
#include <string>

using namespace std;

Student::Student(int age, int order) { this->ID = age * 10000 + order; }

// 构造函数列表初始化
// 按照声明顺序进行初始化
Student::Student(string name, int age) : name(name), age(age) {}

Student::Student(char six) { this->six = six; }

// 委托构造函数函数
Student::Student(string birthday) : Student(char six) {
  this->birthday = birthday;
  this->six = six;
}

void test_student() { Student *stu = new Student(30, 1); }
