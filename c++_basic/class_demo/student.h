#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student {
public:
  int age;
  std::string name;
  char six;
  std::string birthday;

private:
  int ID;

public:
  void goToSchool();

public:
  Student(int age, int order); // 构造函数
  Student(std::string name, int age);

public:
  // 委托构造函数
  Student(char six);
  Student(std::string birthday);
};

void test_student();

#endif // !STUDENT_H
