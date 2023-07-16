#include <iostream>
#include <utility>
#include <string>
#include <vector>

template <typename T>

void myswap(T &a, T &b)
{
    T temp{std::move(a)}; // invoke move constructor
    a = std::move(b);     // invoke move assignment
    b = std::move(temp);  // invoke move assignment
}

int main()
{
    std::string x{"abc"};
    std::string y{"de"};

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    myswap(x, y);

    return 0;
}