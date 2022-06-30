#include<iostream>
#include<fstream>

class Base {
  int x;
};

template < class T >
  class Derived: public Base {
    int y;
  };

int main() {
  Base b;
  Derived < int > d;
  return 0;
}
