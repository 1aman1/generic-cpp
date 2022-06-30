#include<iostream>

#include<fstream>

template < class T >
  class Base {
    int x;
  };

class Derived: public Base < int > {
  int y;
};

int main() {
  Base < int > b;
  Derived d;
  return 0;
}
