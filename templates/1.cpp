#include<iostream>
#include<fstream>

template<class T>
T add(T a, T b) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  return a+b;
}

int main() {

  std::cout << add(1,2) <<std::endl;
  std::string s = "a";
  std::string s1 = "b";
  std::cout << add(s, s1) <<std::endl;
  
  return 0;
}
