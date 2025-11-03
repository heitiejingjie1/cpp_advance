#include "extend.h"
#include <iostream>

using namespace std;

void display() {
  Derivation dr(30);
  cout << dr.GetNum() << endl;
}

Base::Base() {}
Base::Base(int num) : num_(num) { cout << "Base(int num) ......" << endl; }

Base::~Base() { cout << "~Base() ...." << endl; }

int Base::GetNum() {
  cout << "Base GetNum" << endl;
  return num_;
}

Derivation::Derivation(int num) : num_(num) {
  cout << "Derivation(int num) ....." << endl;
}

Derivation::~Derivation() { cout << "~Derivation() ...." << endl; }

int Derivation::GetNum() {
  cout << "Derivation GetNum" << endl;
  return num_;
}
