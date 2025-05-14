# classi

```
class <nomeClasse> {
  public:
    // membri accessibili all'esterno della classe
  protected:
    // membri accessibili dalla classe ed in tutte le sue derivate
  private:
    // membri accessibili solo all'interno della classe
}
```

## esempio 1

```
// persone.h
#ifndef PERSONE_H
#define PERSONE_H

#include <iostream>
#include <string>

namespace persone {

    class persona {
        public:
            // Constructor
            persona(const std::string& nome, const std::string& cognome, int eta);

            // Destructor
            ~persona();

            // Getters
            std::string getNome() const;
            std::string getCognome() const;
            int getEta() const;

            // Setters
            void setNome(const std::string& nome);
            void setCognome(const std::string& cognome);
            void setEta(int eta);

        private:
            std::string nome;
            std::string cognome;
            int eta;

    };

} // namespace persone

#endif // PERSONE_H
```

```
// persone.cpp
#include "persone.h"

namespace persone {

    // Constructor
    persona::persona(const std::string& nome, const std::string& cognome, int eta)
        : nome(nome), cognome(cognome), eta(eta) {}

    // Destructor
    persona::~persona() {}

    // Getters
    std::string persona::getNome() const {
        return nome;
    }

    std::string persona::getCognome() const {
        return cognome;
    }

    int persona::getEta() const {
        return eta;
    }

    // Setters
    void persona::setNome(const std::string& nome) {
        this->nome = nome;
    }

    void persona::setCognome(const std::string& cognome) {
        this->cognome = cognome;
    }

    void persona::setEta(int eta) {
        this->eta = eta;
    }

} // namespace persone
```

```
// main.cpp
#include <iostream>
#include "persone.h"

int main() {
    persone::persona p("Mario", "Rossi", 30);

    std::cout << "Nome: " << p.getNome() << std::endl;
    std::cout << "Cognome: " << p.getCognome() << std::endl;
    std::cout << "Età: " << p.getEta() << std::endl;

    p.setEta(31);
    std::cout << "Età aggiornata: " << p.getEta() << std::endl;

    return 0;
}
```

