#include "string.h"
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

void display_string() {
  define_and_initional_string();
  operator_string();
}

void define_and_initional_string() {

  string s1;
  string s2 = s1;
  string s3 = "hello"; // 拷贝初始化
  string s4(5, 'y');   // 直接初始化, 重复字符多次
  string s5("world");  // 直接初始化

  cout << "s1 = " << s1 << endl;
  cout << "s2 = " << s2 << endl;
  cout << "s3 = " << s3 << endl;
  cout << "s4 = " << s4 << endl;
  cout << "s5 = " << s5 << endl;
}

void operator_string() {
  // 读写字符串
  // {
  //   string s1, s2;
  //   cin >> s1 >> s2;
  //   cout << s1 << " " << s2 << endl;
  //
  //   // 读写未知数量的字符串,每次输出一个单词
  //   // string word;
  //   // while (cin >> word) {
  //   //   cout << word << endl;
  //   // }
  //
  //   // 读取一行，遇到换行符，输出一行
  //   string line;
  //   while (getline(cin, line)) {
  //     // 判断字符串是否为空
  //     if (!line.empty()) {
  //       // 统计字符串字数
  //       cout << "line size: " << line.size() << endl;
  //       cout << line << endl;
  //     }
  //   }
  // }

  // 字符串相加
  {
    string s1 = "hello";
    string s2 = "world";

    // string s3 = "yin" + "hao";  //
    // 字符串相加时，在"+"左右必须有一个string对象
    string s4 = s1 + " fengmuxia";
    string s5 =
        (s2 + " ") + ", I'm come!"; // 与上类似,将括号里的内容生成一个string对象
  }

  // 处理字符串字符，范围for语句
  {
    string str("one dark");
    for (auto s : str) {
      cout << s << endl;
    }

    // 统计字符串中的标点符号
    string str2("hello,world!!!");
    decltype(str2.size()) punct_cnt = 0;
    for (auto s : str2) {
      if (ispunct(s)) {
        ++punct_cnt;
      }
    }
    cout << str2 << "中的标点符号个数: " << punct_cnt << "个" << endl;

    // 转换大小写
    for (auto &s : str2) {
      s = toupper(s);
    }
    cout << str2 << endl;

    str2 = "hello,world!!!";

    // 处理一部分字符串
    if (!str2.empty()) {
      str2[0] = toupper(str2[0]);
    }
    cout << str2 << endl;

    str2 = "hello world!!!";
    for (decltype(str2.size()) index = 0;
         index != str2.size() && !isspace(str2[index]); ++index) {
      str2[index] = toupper(str2[index]);
    }
    cout << str2 << endl;

    // 将输入的数字转换为十六进制数
    const string hexdigits = "0123456789ABCDEF";
    string result;

    cout << "请输入要转换的数字: " << endl;
    string::size_type n;
    while (cin >> n) {
      if (n < hexdigits.size()) {
        result += hexdigits[n];
      }
    }
    cout << "你得到的十六进制数为: " << result << endl;
  }
}
