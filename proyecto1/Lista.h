#include "Nodo.h"
#include <iostream>
#ifndef PROYECTO1_LISTA_H
#define PROYECTO1_LISTA_H


class Lista {
protected:
    Nodo *head;
    Nodo *cola;
public:
    Lista();
    void crearLista();
    void visualizarListaDerecha();
    void ingresarNuevoHuesped();
    Nodo *insertarALaCabeza( string nombre,int entrada);
    Nodo*buscarHuesped(string huesped);
    Nodo*buscarHabitacion(int habitacion);
    Nodo*mirarvecinos(int habitacion);

};


#endif //PROYECTO1_LISTA_H
