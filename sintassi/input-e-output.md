# la libreria iostream

| stream           | direzione         | descrizione         |
|------------------|-------------------|---------------------|
| std::cout        | output            | standard output     |
| std::cerr        | output            | standard error      |
| std::clog        | output            | standard log        |
| std::cin         | input             | standard input      |

## std::cout

```
std::cout << "Questo è un messaggio informativo";
```

## std::cerr

```
std::cerr << "Questo è un messaggio d'errore";
```

## std::clog

```
std::clog << "Se tutto va bene, questo messaggio non interessa a nessuno...";
```

## std::cin

```
int a;
std::cin >> a;
```

## getline()

```
std::string b;
getline(std::cin, b);
```

## good()

```
std::cout << "inserisci un intero e una stringa ";
int a;
std::string b;
std::cin >> a >> b;
if( std::cin.good() ) {
  std::cout << "hai inserito " << a << " e " << b;
} else {
  std::cerr << "errore!";
}
```
