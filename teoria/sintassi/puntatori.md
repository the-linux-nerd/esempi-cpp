# puntatori

# esempio 1

```
#include <iostream>

int main() {

int a = 0; // stack: {a}

{

  int b = a + 1; // stack: {b} {a}

  {
    int c = b + 1; // stack: {c} {b} {a}
  } // stack: {b} {a}

} // stack: {a}

  return 0;

}
```

# esempio 2

```
#include <iostream>

int main() {

int *a = new int(0); // stack: {a} heap: {*a}

{

  int b = *a + 1; // stack: {b} {a} heap: {*a}

  {
    int c = b + 1; // stack: {c} {b} {a} heap: {*a}
  } // stack: {b} {a} heap: {*a}


} // stack: {a} heap: {*a}

  delete a; // stack: heap:

  return 0;

}
```

cosa    | dove si trova    | cosa contiene
--------|------------------|--------------------------------------------------------------
a       | stack            | un indirizzo di memoria (verso heap) ad es. 0x7fff...38
*a      | heap             | il valore 0

# esempio 3

```
#include <iostream>

int main() {

  int a = 1;
  int *ptr = &a;
  int b = *ptr;

  std::cout << "a: " << a << std::endl; // 1
  std::cout << "b: " << b << std::endl; // 1
  std::cout << "*ptr: " << *ptr << std::endl; // 1

  return 0;

}
```

# esempio 4

```
#include <iostream>

int main() {

  int a = 1;

  std::cout << "a: " << a << std::endl; // 1
  std::cout << "&a: " << &a << std::endl; // 1

  int *ptr = &a;

  std::cout << "ptr: " << ptr << std::endl; // 1
  std::cout << "*ptr: " << *ptr << std::endl; // 1

  int b = *ptr;

  std::cout << "b: " << b << std::endl; // 1

  return 0;

}
```
