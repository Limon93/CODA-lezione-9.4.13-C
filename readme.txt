ESERCITAZIONE ASD - CODA
Lezione 09/04/2013 Della Cioppa

Utilizzo di una struttura dati CODA con un array allocato a tempo di esecuzione

Ogni singolo elemento dell'array è di tipo TInfo (nel nostro caso contiene: nominativo cliente, prestazione e prezzo).

Le funzioni per l'utilizzo della coda sono:

TQueue queue_create (int); //Creazione coda
void queue_destroy(TQueue*); //Distruzione coda
void queue_add(TQueue*, TInfo); //Inserimento di un elemento in coda
TInfo queue_remove(TQueue*); //Prelievo di un elemento dalla coda
TInfo queue_front(TQueue*); //Lettura del primo elemento della coda
bool queue_is_empty(TQueue*);  //Controllo booleano se la coda è vuota
bool queue_is_full(TQueue*); //Controllo booleano se la coda è piena



by Grauso Francesco