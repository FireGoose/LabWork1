#include <iostream>
#include <typeinfo>

int main() {
    std::cout << typeid("abc").name() << std::endl;
    return 0;
}
