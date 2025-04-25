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


