# costrutti decisionali
Il c++ ci mette a disposizione diversi strumenti per eseguire rami di codice diversi al verificarsi di determinate condizioni.

# if... else if... else
Il classico costrutto decisionale presente in ogni linguaggio di programmazione:

```
if (<espressione1>) {
  // istruzioni da eseguire se la espressione1 = true
} else if (<espressione2>) {
  // istruzioni da eseguire se espressione1 = false e espressione2 = true
} else if (<espressioneN>) {
  // istruzioni da eseguire se espressioneX = false (per X=1,2,..N-1) e espressioneN = true
} else {
  // istruzioni da eseguire se nessuna delle espressioni è verificata
}
```

# switch... case... default
Questo costrutto, molto diffuso ma meno comune, ci consente di eseguire un certo ramo di codice in base al valore assunto da
una variabile di tipo int; a parità di condizioni è più efficiente di if... else.

```
switch (<espressione>) {
  case <valore costante 1>:
    // istruzioni
  break;
  case <valore costante 2>:
    // istruzioni
  break;
  case <valore costante N>:
    // istruzioni
  break;
  default:
    // istruzioni
  break;
}
```

Va notato che il blocco default è opzionale, ma se presente viene eseguito nel caso in cui il valore di <espressione> non
coincida con nessuno dei case. Anche lo statement break è opzionale, e in quel caso il codice del blocco - se possibile -
viene eseguito assieme a quello del blocco successivo. In altre parole è possibile combinare più case omettendo break nel
mezzo.
