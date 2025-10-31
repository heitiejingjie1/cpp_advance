#ifndef ENCAPSULATION_INLINING_FUNC_H
#define ENCAPSULATION_INLINING_FUNC_H
class A {
private:
  int a;
  void func(int i = 2) { a = i; } // 内联函数

public:
  void func(int i, int j = 2) { a = i + j; }
  int get_a() { return a; }
};

// 权限
void permission();

// 内联函数: 声明与定义不可分开
// 内联修饰符只是建议而不是命令，编译器自己判断
inline int max(int a, int b) { return a > b ? a : b; }
void inline_func();

void encapsulation();

#endif // !ENCAPSULATION_INLINING_FUNC_H
