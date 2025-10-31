#ifndef OVERLOAD_H
#define OVERLOAD_H

/*
 * 参数类型、顺序和个数可作为函数重载的标志
 * 返回值、参数名不能作为函数重载的标志
 */
#include <string>
float func(int val);
// int func(int val);

// 自动类型转换
// 注意类型提升
// 优先匹配调用
void print(int value);
void print(float value);
// 参数缺省值
void print(const std::string msg = "hello");

void overload_func();

/*
 * auto与decltype类型推导
 */
int func_type(char *ptr, int val); // 普通函数
// 追踪返回类型的函数
// 在返回值类型的地方使用auto，在参数列表后，写上返回值类型
auto func_type2(char *ptr, int val) -> int;
// 模板类型推导
template <typename T1, typename T2>
auto sum(T1 &t1, T2 &t2) -> decltype(t1 + t2);

void type_inference();

#endif // !OVERLOAD_H
