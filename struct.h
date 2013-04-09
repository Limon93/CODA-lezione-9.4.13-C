//
//  struct.h
//  coda allocata a tempo di esecuzione
//
//  Created by Francesco Grauso on 09/04/13.
//  Copyright (c) 2013 Francesco Grauso. All rights reserved.
//

#ifndef struct_h
#define struct_h

#define MAXCAR 50

//STRUTTURA DI INFO
struct SInfo
{
    char cliente[MAXCAR];
    char prestazione[MAXCAR];
    float prezzo;
    

};

typedef struct SInfo TInfo;


//STRUTTURA CODA

struct SQueue{
    int n;
    int front;
    int back;
    int capacity;
    TInfo *a;
    
};

typedef struct SQueue TQueue;

#endif
