#include <iostream>

/*
 * 测试注释*/
void test_annotation();

/*
 * 读取两个数，求它们的和及积*/
void test_in_out();

/*
 * 测试while控制流*/
void test_while();

/*
 * 测试if控制流*/
void test_if();

/*
 * 简单主函数，调用函数*/
int main(int argc, char *argv[]) {
  // test_in_out();
  // test_annotation();
  test_while();
  // test_if();

  return 0;
}

void test_if() {
  // currVal正在统计的数，val新读入的值
  int currVal = 0;
  int val = 0;

  // 读取第一个数，并确保有数据可以处理
  if (std::cin >> currVal) {
    int cnt = 1;              // 当前值的个数
    while (std::cin >> val) { // 读取剩余的数
      if (val == currVal) {
        ++cnt;
      } else {
        std::cout << currVal << " 重复次数为：" << cnt << std::endl;
        currVal = val;
        cnt = 1;
      }
    }

    std::cout << currVal << " 重复次数为：" << cnt << std::endl;
  }
}

void test_while() {

  /*
   * 打印1到10的和 */
  int sum = 0;
  int val = 1;

  while (val <= 10) {
    sum += val;
    ++val;
  }

  std::cout << "1到10的和为: " << sum << std::endl;

  /*
   * 打印50到100的和 */
  int sum50 = 0;
  int val50 = 50;

  while (val50 <= 100) {
    sum50 += val50;
    ++val50;
  }

  std::cout << "50到100的和为: " << sum50 << std::endl;

  /*
   * 打印10到0的数*/
  int val10 = 10;
  while (val10 >= 0) {
    std::cout << val10 << std::endl;
    --val10;
  }
  std::cout << std::endl;

  /*
   * 打印指定范围数的和*/
  int valBegin = 0;
  int valEnd = 0;
  std::cout << "请输入两个指定范围内的数：";
  std::cin >> valBegin >> valEnd;

  if (valBegin > valEnd) {
    int temp = valBegin;
    valBegin = valEnd;
    valEnd = temp;
  }

  while (valBegin <= valEnd) {
    std::cout << valBegin << std::endl;
    ++valBegin;
  }
  std::cout << std::endl;

  /*
   * 读取数量不定的数据*/
  int sumIndefinite = 0;
  int valIndrfinite = 0;

  while (std::cin >> valIndrfinite) {
    sumIndefinite += valIndrfinite;
  }

  std::cout << "和为：" << sumIndefinite << std::endl;
}

void test_in_out() {
  std::cout << "输入两个数字:" << std::endl;

  int value1 = 0;
  int value2 = 0;
  std::cin >> value1 >> value2;

  std::cout << "hello, world" << std::endl;

  std::cout << "和为: " << value1 << " + " << value2 << " = " << value1 + value2
            << std::endl
            << "积为: " << value1 << " * " << value2 << " = " << value1 * value2
            << std::endl;
}

void test_annotation() {
  std::cout << "/*";
  std::cout << "*/";
  // std::cout << /* "*/ " */;
  std::cout << /* "*/ " /* " /*" */;
  std::cout << std::endl;
}
