#include <iostream>

int main() {

    int a = 7;

    std::cout << "a: " << a << std::endl;
    std::cout << "&a: " << &a << std::endl;

    int *ptr = &a;

    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;

    int b = *ptr;

    std::cout << "b: " << b << std::endl;

    int *c = new int(5);

    std::cout << "c: " << c << std::endl;
    std::cout << "*c: " << *c << std::endl;

}
