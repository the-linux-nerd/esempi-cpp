#include <iostream>

int a;

int main() {

    a = 3;

    switch( a ) {
        case 1:
        case 2:
        case 3:
        case 4:
            std::cout << "a è minore di 5" << std::endl;
            break;
        case 5:
            std::cout << "a è 5" << std::endl;
            break;
        case 10:
            std::cout << "a è 10" << std::endl;
            break;
        default:
            std::cout << "a non è 1, 5 o 10" << std::endl;
            break;
    }

}
