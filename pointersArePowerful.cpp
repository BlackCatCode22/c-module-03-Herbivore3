#include <iostream>

int main() {
    int a = 10;
    int* p = &a;

    std::cout << "Address stored in p: " << p << std::endl;
    std::cout << "Value of a using p: " << *p << std::endl;

    *p = 20;
    std::cout << "New value of a: " << a << std::endl;

    return 0;
}
