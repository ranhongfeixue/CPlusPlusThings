/**
 * @file interesting_facts2.cpp
 * @brief 抽象类类型的指针和引用
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

#include <iostream>
using namespace std;

/**
 * @brief 抽象类至少包含一个纯虚函数
 */
class Base {
  int x;

public:
  virtual void show() = 0;
  int getX() { return x; }
};
class Derived : public Base {
public:
  void show() { cout << "In Derived \n"; } // void show() override { ... }
  Derived() {}
};
int main(void) {
  // Base b;  //error! 不能创建抽象类的对象
  // Base *b = new Base(); error!
  // Base *bp = new Derived(); // 抽象类的指针和引用 -> 由抽象类派生出来的类的对象
  // bp->show();

  // 也可以这样子实现的
  Derived t;
  t.show();

  return 0;
}

/*
new 出来的就是 堆里面，需要手动释放的


- 栈 = “餐厅吃完就走的座位”——临时占用，吃完自动空出来
- 堆 = “仓库堆货”——你自己堆上去，也得自己清理

*/

