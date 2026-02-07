// variables inside a class

#include <iostream>
using namespace std;

class Apple {
public:
  static int i;

  Apple(){
      // Do nothing
  };
};

int Apple::i = 0; // 必须有定义，不然会报错了，作者这里没有加这行代码

int main() {
  Apple obj1;
  Apple obj2;
  obj1.i = 2;
  obj2.i = 3;

  // prints value of i
  cout << obj1.i << " " << obj2.i << endl; // 因为这个是一个静态变量，所有只会有一份，它的结果是 3 3
}
