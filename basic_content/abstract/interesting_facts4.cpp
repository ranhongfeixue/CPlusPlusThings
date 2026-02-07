/**
 * @file interesting_facts4.cpp
 * @brief 抽象类可以有构造函数
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

#include <iostream>
using namespace std;

// An abstract class with constructor
class Base {
protected:
  int x;

public:
  virtual void fun() = 0;
  Base(int i) { x = i; }
};

class Derived : public Base {
  int y;

public:
  Derived(int i, int j) : Base(i) { y = j; }
  void fun() { cout << "x = " << x << ", y = " << y; }
};

int main(void) {
  Derived d(4, 5);
  d.fun();
  return 0;
}


/*
上面构造方法的解义

Base(i) { y = j; }
这两个是分开的；

- Base(i) 是调用基类构造函数，它负责给基类里的 x 赋值
- { y = j; } 是派生类构造函数体，给派生类里的 y 赋值
*/