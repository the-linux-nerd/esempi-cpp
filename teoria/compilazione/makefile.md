# il Makefile e il comando make
Il Makefile è semplicemente un file che istruisce il comando make su ciò che desideriamo faccia per noi. In pratica, dobbiamo solo creare un makefile in una cartella, compilarlo con la sintassi corretta, e lanciare il comando make che farà
tutto il lavoro al nostro posto. In questi esempi vediamo passo passo come costruire un Makefile funzionante e via via sempre più articolato.

## esempio 1
Il primo concetto con cui bisogna familiarizzare quando si parla di makefile è il concetto di target. Un target rappresenta un insieme di comandi da eseguire, indentati da una tabulazione:

```
all:
	echo "ciao mondo"
```

In questo esempio lanciando il comando make si otterrà l'esecuzione del target "all" in quanto è il primo (beh qui è anche l'unico) del file a non avere prerequisiti (vedi sotto); vedremo quindi a schermo la scritta "ciao mondo".
Normalmente in un makefile ci sono più target, alcuni dei quali richiedono come prerequisito l'esecuzione di un altro target o la presenza di un dato file nella cartella; per esempio se il nostro Makefile fosse:

```
all: ciao
	echo "mondo"

ciao:
	echo "ciao"
```

Otterremmo che per primo verrebbe eseguito il target "ciao" e poi il target "all" che ha come prerequisito "ciao".

## esempio 2
Il prerequisito di un target può essere l'esistenza di un file; ad esempio se il nostro Makefile fosse:

```
prova: ciao.txt
	echo "il file esiste"
```

Otterremmo la scritta "il file esiste" se nella cartella è presente un file che si chiama ciao.txt mentre otterremmo un messaggio di errore se il file non esiste. Ovviamente possiamo prevedere un target per creare il file:

```
all:
	echo "ciao mondo" > ciao.txt

prova: ciao.txt
	echo "il file esiste"
```

## esempio 3
L'ordine in cui si elencano i vari target è importante, specie se si vogliono creare dei file (si provi a scambiare l'ordine dei target nel Makefile dell'esempio precedente); per non fare confusione è sempre meglio procedere
per ordine e assegnare a ogni target un'etichetta chiara:

```
all: riempi
	cat ciao.txt

riempi: ciao.txt
	echo "ciao mondo" > ciao.txt

ciao.txt:
	touch ciao.txt
```

## esempio 4
Come si sarà notato, la parola ciao ricorre molte volte nel nostro Makefile di esempio; ovviamente è possibile dichiarare e utilizzare delle variabili all'interno del Makefile per semplificarne la lettura e per renderlo più
flessibile:

```
t := ciao

all: riempi
	cat $(t).txt

riempi: $(t).txt
	echo "ciao mondo" > $(t).txt

$(t).txt:
	touch $(t).txt
```

## esempio 5
All'interno dei target è possibile inserire pressoché tutti i comandi che siamo abituati normalmente a utilizzare da linea di comando; si supponga ad esempio di voler pulire la cartella di lavoro:

```
t := ciao

all: $(t).txt
	cat $(t).txt

$(t).txt: riempi
	cp $(t).tmp $(t).txt

riempi: $(t).tmp
	echo "ciao mondo" > $(t).tmp

$(t).tmp:
	touch $(t).tmp

clean:
	rm -f *.tmp
```

Dopo aver dato il comando make è possibile usare make clean per pulire la cartella di lavoro dal file tmp che avremo creato.

# link-o-grafia
- https://makefiletutorial.com/
- http://matteolucarelli.altervista.org/opendev/makeintro.htm
- 
