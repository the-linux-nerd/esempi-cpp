#include <iostream>

void somma( int *s, int a, int b );

int main() {
    
    int a = 5;
    int b = 10;
    int s = 0;

    somma( &s, a, b );

    std::cout << "il risultato è " << s << std::endl;

    return 0;

}

void somma( int *s, int a, int b ) {
    *s = a + b;
}
