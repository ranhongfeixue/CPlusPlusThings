#include <iostream>
using namespace std;
int main() {
  int num = 0;
  int *const ptr = &num; // const指针必须初始化！且const指针的指向不能修改
  int *t = &num;
  *t = 1;
  cout << *ptr << endl;
  *ptr = 2;
  cout << *ptr << endl;
}


/*

int *const p1 = &num;   // 常量指针，地址不能改，值能改
const int *p2 = &num;   // 指向常量的指针，地址能改，值不能改
const int *const p3 = &num; // 两边都不能改
*/