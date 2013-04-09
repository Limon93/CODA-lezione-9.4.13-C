//
//  main.c
//  CODA lezione 9.4.13
//
//  Created by Francesco Grauso on 09/04/13.
//  Copyright (c) 2013 Francesco Grauso. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "struct.h"
#include "coda.h"
#include "stdbool.h"
#include "utillib.h"

int main()
{

    TQueue queue;
    TInfo info;
    int select, capacity;
    
    printf("Inserisci la dimensione della coda! \n");
    scanf("%d", &capacity);
    queue=queue_create(capacity);
    select=menu();
    
    while (select>=1 && select<=4)
    {
       
         
        switch (select) {
                
            case 1:
                if(!queue_is_full(&queue)){
                    info=ReadInfo();
                    queue_add(&queue, info);
                    
                }
                else{
                    printf("La coda è piena! \n");
                    
                }
                select=menu();
            
                break;
            
                
           
            case 2:
                if(!queue_is_empty(&queue)){
                    info=queue_front(&queue);
                    printf("\n Prossimo cliente:\n");
                    PrintInfo(&info);
                    
                }
                else{
                    printf("La coda è vuota! \n");
                }
                select=menu();
            
                break;
            
            case 3:
                if(!queue_is_empty(&queue)){
                    info=queue_remove(&queue);
                    printf("\n Stai servendo il cliente:\n");
                    PrintInfo(&info);
                    }
                else{
                    printf("La coda è vuota! \n");
                }
                select=menu();
            
                break;
            
            case 4:
                queue_destroy(&queue);
                printf("Programma chiuso correttamente! \n");
                select=0;
                break;
        }
    
    
    }
    return 0;
}

