#include <iostream>

int a;

int main() {
    
    std::cout << "inserisci un numero: ";
    std::cin >> a;

    if (a > 0) {
        std::cout << "il numero e' positivo" << std::endl;
    } else if (a < 0) {
        std::cout << "il numero e' negativo" << std::endl;
    } else {
        std::cout << "il numero e' zero" << std::endl;
    }

    return 0;

}
