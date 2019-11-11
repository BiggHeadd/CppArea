#include <iostream>
using namespace std;

class A {
public:
  void setx(int a) { x = a; }
  int getx() { return x; }

private:
  int x;
};

class B : public A {
public:
  void sety(int a) { y = a; }
  int gety() { return y; }

private:
  int y;
};

class C : public A {
public:
  void setz(int a) { z = a; }
  int getz() { return z; }

private:
  int z;
};

class D : public B, public C {
  //......
};

int main() {
  D test;
  test.B::setx(10);
  cout << test.B::getx() << endl;
  return 0;
}