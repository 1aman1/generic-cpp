#include<iostream>

#include<fstream>

template < class T >
  class Base {
    int x;
  };

template < class T_U, class T >
  class Derived: public Base < T > {
    int y;
  };

int main() {
  Base < int > b;
  Derived < int, int > d;
  return 0;
}
