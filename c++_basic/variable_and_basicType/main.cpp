#include <cstddef>
#include <cstdint>
#include <iostream>

using namespace std;

/*
 * 测试类型转换*/
void test_type();

/*
 * 变量测试*/
void test_value();

int main(int argc, char *argv[]) {

  test_type();
  return 0;
}

void test_value() {
  /*
   * 变量初始化
   * 以下都表示初始化 */
  {
    int value = 0;
    int value2 = {0};
    int value3{0};
    int value4(0);
  }
}

int valOuter;
extern double Pi; // 只声明不定义
int year;         // 声明并定义
int day = 29;     // 声明并定义

void test_type() {
  /*
   * 含有有符号与无符号的混合运算*/
  {
    unsigned u = 10;
    int i = -42;
    unsigned u2 = 42;
    cout << "i + i = " << i + i << endl;
    cout << "i + u = " << i + u << endl;
    cout << "u2 - u = " << u2 - u << endl;
    cout << "u - u2 = " << u - u2 << endl;

    cout << UINT32_MAX << endl;
    cout << "\thi!\n";
    cout << "\1234" << endl;
    // int month = 09;
    // cout << month << endl;
  }

  // 初始化
  // 在函数外的变量会自动初始化
  // 在函数内的变量不会自动初始化
  {
    int valInner;
    cout << "valInner = " << valInner << endl;
    cout << "valOuter = " << valOuter << endl;
  }

  // 测试变量作用域
  {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; i++) {
      sum += i;
    }
    cout << "i = " << i << "\n" << "sum = " << sum << endl;
  }

  /*
   * 引用
   * 为对象起别名
   * 将变量与引用变量绑定在一起，修改引用变量，也将改变原值
   * */
  {
    int iVal = 30;
    int &refVal = iVal;
    // int &refVal2;       // 引用必须初始化

    cout << "iVal = " << iVal << endl;
    refVal = 29;
    cout << "iVal = " << iVal << endl;

    // 引用类型必须与要绑定的变量一致
    // 引用必须绑定变量，不能绑定字面值
    // int &bingVal = 30;
    // double &dVal = iVal;

    // 测试引用
    {
      int i = 0, &r1 = i;
      double d = 0, &r2 = d;
      r2 = 3.14159;
      r2 = r1;
      i = r2;
      r1 = d;
    }
  }

  /*
   * 指针
   * 指向某种类型的复合类型
   * 本身也是一种类型*/
  {
    // 获取对象的地址
    {
      int iVal = 30;
      int *piVal = &iVal;
      cout << *piVal << endl;
      cout << piVal << endl;
      cout << ++piVal << endl;
    }

    // 空指针
    {
      int *p1 = nullptr;
      int *p2 = 0;
      int *p3 = NULL; // 等价于int *p3 = 0
      int zero = 0;
      // p3 = zero;     // 不能将数值变量赋值给指针
    }

    // 复合型指针
    {
      int ival = 1024;
      int *pi = &ival;
      int **ppi = &pi;

      cout << "ival value: " << ival << "\n"
           << "*pi value: " << *pi << "\n"
           << "**ppi value: " << **ppi << endl;
    }
  }
}
