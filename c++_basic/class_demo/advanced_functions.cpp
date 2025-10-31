#include "advanced_functions.h"
#include <iomanip>
#include <iostream>

using namespace std;

void overload_demo() {
  double score = 96.868;
  print(score);
  score = 96;
  print(score);
}

void print(int score) { cout << "int = " << score << endl; }

void print(double score) {
  cout << "double = " << fixed << setprecision(2) << score << endl;
}
