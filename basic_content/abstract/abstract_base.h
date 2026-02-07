/**
 * @file abstreact_base.cpp
 * @brief
 * C++中的纯虚函数(或抽象函数)是我们没有实现的虚函数！我们只需声明它!通过声明中赋值0来声明纯虚函数！
 * 纯虚函数：没有函数体的虚函数
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

/**
 * @brief 抽象类
 */
class AbstractBase {
  // Data members of class
public:
  // Pure Virtual Function
  virtual void show() = 0;

  /* Other members */
};


/*
- 普通虚函数：有实现（类内或类外定义），派生类可以不重写，直接用基类实现。
- 纯虚函数：声明处写 = 0，这让类变成抽象类，必须由派生类重写后才能实例化派生类对象。
  但纯虚函数也可以有定义（通常在类外提供），只是仍然是“纯”的，抽象性不变。


= 0 决定“是否为抽象类、是否强制重写”，不完全取决于有没有函数体。

*/