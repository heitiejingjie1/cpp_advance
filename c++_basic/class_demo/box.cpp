#include "box.h"
#include <functional>
#include <iostream>

using namespace std;

void display_class() { accessing_class(); }

void accessing_class() {
  /*
   * 声明变量
   * */
  {
    Box box1;
    Box box2;

    box1.setLength(10);
    box1.setBreadth(25.9);
    box1.setHeight(89.6);

    box2.setHeight(56.9);
    box2.setLength(45.36);
    box2.setBreadth(78);

    cout << box1.getVolume() << endl;
    cout << box2.getVolume() << endl;
  }
}

double Box::getVolume() { return length * breadth * height; }

void Box::setLength(double len) { length = len; }
void Box::setBreadth(double brie) { breadth = brie; }
void Box::setHeight(double hei) { height = hei; }

double Box::getHeight() { return height; }
double Box::getLength() { return length; }
double Box::getBreadth() { return breadth; }
