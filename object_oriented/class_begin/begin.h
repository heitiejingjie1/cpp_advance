#ifndef BEGIN_H
#define BEGIN_H

#include <string>

class Student {
public:
  int age;
  std::string name;

private:
  int ID;

public:
  int list_id1;
  int list_id2;

public:
  void goToSchool();
  void print();

  // 构造函数
public:
  // Student(int id) { ID = id; } // 普通构造函数
  // Student(int id) : ID(id) {} // 初始化列表
  Student(int year, int order) { ID = year * 10000 + order; }

  Student(int id) : list_id2(id), list_id1(list_id2) {}
};

class Info {
  // 委派构造函数
public:
  Info() { InitRest(); }             // 目标构造函数(被调用函数)
  Info(int i) : Info() { type = i; } // 委托构造函数
  Info(char e) : Info() { name = e; }

private:
  void InitRest();
  int type{1};
  char name{'a'};
};

void constructor_test();
#endif // !BEGIN_H
