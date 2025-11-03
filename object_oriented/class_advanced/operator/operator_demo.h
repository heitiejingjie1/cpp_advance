#ifndef _OPERATOR_DEMO_H_
#define _OPERATOR_DEMO_H_

class Test {
private:
  int num_;

public:
  Test();
  Test(int num);

public:
  ~Test();

public:
  Test &operator++();   // 前置++
  Test operator++(int); // 后置++
  Test &operator--();   // 前置--
  Test operator--(int); // 后置--
  int operator!();      // 非

public:
  int GetNum() const;
};

void display();

#endif // !_OPERATOR_DEMO_H_
