#include <iostream>

class interface_t
{
public:
    virtual void shape() = 0;
};

class circle : public interface_t
{
public:
    void shape()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class square : public interface_t
{
public:
    void shape()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main()
{
    interface_t *ptocircle = new circle();
    ptocircle->shape();
  
    return 0;
}
