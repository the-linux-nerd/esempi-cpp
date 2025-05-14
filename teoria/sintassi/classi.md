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
