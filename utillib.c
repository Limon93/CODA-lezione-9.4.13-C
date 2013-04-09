//
//  utillib.c
//  CODA lezione 9.4.13
//
//  Created by Francesco Grauso on 09/04/13.
//  Copyright (c) 2013 Francesco Grauso. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "struct.h"
#include "stdbool.h"

TInfo ReadInfo()
{
    TInfo x;
    printf("\n \n");
    printf("Digita il nome del cliente \n");
    scanf("%s", x.cliente);
    printf("Digita prestazione \n");
    scanf("%s", x.prestazione);
    printf("Digita prezzo per %s \n", x.prestazione);
    scanf("%f", &x.prezzo);
    return x;
}


void PrintInfo(TInfo* x)
{
    printf("Nominativo cliente: %s \n", x->cliente);
    printf("Prestazione: %s \n", x->prestazione);
    printf("Prezzo: %f€ \n", x->prezzo);
}



int menu()
{
    int scelta;
    do
        {
            printf("\n ----------------------------- \n");
            printf("Seleziona una scelta! \n");
            printf("1. Aggiorna coda. \n");
            printf("2. Visualizza prossimo cliente. \n");
            printf("3. Servi prossimo cliente. \n");
            printf("4. ESCI! \n");
            printf("\n ----------------------------- \n");
            scanf("%d", &scelta);
            if (scelta>4 || scelta<1)
                printf("Scelta non valida \n");
        
        }
    while (scelta>4 || scelta<1);
    return scelta;
}

