#include "Habitacion.h"
#include <iostream>
#ifndef PROYECTO1_NODO_H
#define PROYECTO1_NODO_H


class Nodo {
protected:
    string dato1;
    int dato2;
    int puntero;
    Nodo *previo;
    Nodo *sgte;
    friend class Lista;


public:
    Nodo();

    Nodo(string dato1,int dato2);

    Nodo(string dato1,int dato2, int puntero);

    Nodo( string dato1, int dato2,Nodo *previo, Nodo *sgte);

    Nodo(string dato1, int dato2, int puntero, Nodo *previo, Nodo *sgte);

    Nodo *getPrevio() const;

    void setPrevio(Nodo *previo);

    Nodo *getSgte() const;

    void setSgte(Nodo *sgte);

    string getDato1() const;

    void setDato1(string dato1);

    int getDato2() const;

    void setDato2(int dato2);

    int getPuntero() const;

    void setPuntero(int dato2);


};


#endif //PROYECTO1_NODO_H
