#ifndef BOX_H
#define BOX_H
class Box {
private:
  double length;  // 长
  double breadth; // 宽
  double height;  // 高

public:
  void setLength(double len);
  void setBreadth(double brie);
  void setHeight(double hei);

public:
  double getLength();
  double getBreadth();
  double getHeight();

public:
  double getVolume(void);
};

void display_class();
void accessing_class();

#endif // !BOX_H
