#ifndef _STATIC_DEMO_H_
#define _STATIC_DEMO_H_

class Student {
public:
  Student();

public:
  ~Student();

private:
  static int count_num_; // 静态变量声明性说明

public:
  static int Get_Count_Num();
};

class Singleton {
private:
  static Singleton instance_;

private:
  Singleton();
  Singleton(const Singleton &other);
  Singleton &operator=(const Singleton &other);

public:
  ~Singleton();

public:
  static Singleton GetInstance();
};

void Display();

#endif // !_STATIC_DEMO_H_
