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

/*
 * const成员
 * */
class Const_Test {
private:
  int count_;
  mutable int num_; // 可变成员变量

public:
  Const_Test();

public:
  ~Const_Test();

public:
  int GetCount() const;
  void print();
};

/*
 * 友元
 * */
class Television {
private:
  int volume;
  int channel;
  friend class Telecontroller;

public:
  Television();

public:
  ~Television();
};
class Telecontroller {
public:
  void volume_up(Television &tv);
  void volume_down(Television &tv);
  void channel_up(Television &tv);
  void channel_down(Television &tv);
};

void Display();

#endif // !_STATIC_DEMO_H_
