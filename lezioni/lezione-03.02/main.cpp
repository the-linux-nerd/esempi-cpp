#include <iostream>

int a;
int s;

int main() {

    a = 0;
    s = 0;

    do {
        std::cout << "inserisci un numero: ";
        std::cin >> a;
        s += a;
    } while( s < 10 );

    std::cout << "somma: " << s << std::endl;

    return 0;

}
