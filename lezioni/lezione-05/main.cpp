#include <iostream>

int somma( int a, int b );

int main() {
    
    int a = 5;
    int b = 10;

    int risultato = somma( a, b );

    std::cout << "il risultato è " << risultato << std::endl;

    return 0;

}

int somma( int a, int b ) {
    return a + b;
}
