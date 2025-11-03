#ifndef _EXTEND_H_
#define _EXTEND_H_

class Base {
private:
  int num_;

public:
  Base();
  Base(int num);
  ~Base();

public:
  int GetNum();
};

class Derivation : public Base {
public:
  Derivation(int num);

public:
  ~Derivation();

public:
  int GetNum();

private:
  int num_;
};

void display();
#endif // !_EXTEND_H_
