//
// Created by Mariana Muñoz on 13/03/23.
//
#include <iostream>
#include <string>
#include "Habitacion.h"

Habitacion::Habitacion() {
    this->dato1 = "No hay huesped";
    this->dato2 = 0;
}

Habitacion ::Habitacion(string dato1,int dato2) {
    this->dato1 = dato1;
    this->dato2 = dato2;
}

string Habitacion::getDato1() const {
    return dato1;
}

void Habitacion::setDato1(string dato1) {
    Habitacion::dato1 = dato1;
}

int Habitacion::getDato2() const {
    return dato2;
}

void Habitacion::setDato2(int dato2) {
    Habitacion::dato2 = dato2;
}
