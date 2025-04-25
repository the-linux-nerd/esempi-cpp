# funzioni

## sintassi

```
<tipo> <nome>( <tipoArgomento1> <argomento1>, ..., <tipoArgomentoN> <argomentoN> ) {
  <codice>
}
```

## esempio 1

```
int somma( int a, int b );

int main() {
  ...
}

int somma( int a, int b ) {
  return a + b;
}
```

## esempio 2

```
// somma.h
int somma( int a, int b );
```

```
// somma.cpp
#include "somma.h"
int somma( int a, int b ) {
  return a + b;
}
```

## esempio 3


```
// somma.h
void somma( int *s, int a, int b );
```

```
// somma.cpp
#include "somma.h"
void somma( int *s, int a, int b ) {
    *s = a + b;
}
```

```
// main.cpp
#include <iostream>
#include "somma.h"

int main() {

    int a = 5;
    int b = 10;
    int s = 0;

    somma( &s, a, b );

    std::cout << "somma: " << s << std::endl;

    return 0;

}
```

# esempio 4

```
// somma.h
void somma( int &s, int a, int b );
```

```
// somma.cpp
#include "somma.h"
void somma( int &s, int a, int b ) {
    s = a + b;
}
```

```
// main.cpp
#include <iostream>
#include "somma.h"

int main() {

    int a = 5;
    int b = 10;
    int s = 0;

    somma( s, a, b );

    std::cout << "somma: " << s << std::endl;

    return 0;

}
```
