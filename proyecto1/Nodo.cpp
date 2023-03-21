//
// Created by Mariana Muñoz on 13/03/23.
//
#include <iostream>
#include "Nodo.h"


Nodo::Nodo() {
    this->previo = nullptr;
    this->sgte = nullptr;
}

Nodo::Nodo(string dato1, int dato2){
    this->dato1 = dato1;
    this->dato2 = dato2;
    this->previo = nullptr;
    this->sgte = nullptr;
}

Nodo:: Nodo( string dato1,int dato2,int puntero, Nodo *previo, Nodo*sgte){
    this->dato2 = dato2;
    this->dato1 = dato1;
    this->puntero = puntero;
    this->previo = previo;
    this->sgte=sgte;
}

Nodo:: Nodo(string dato1,int dato2, Nodo *previo, Nodo*sgte){
    this->dato2 = dato2;
    this->dato1 = dato1;
    this->previo = previo;
    this->sgte=sgte;
}

Nodo *Nodo::getPrevio() const {
    return previo;
}

void Nodo::setPrevio(Nodo *previo) {
    Nodo::previo = previo;
}

Nodo *Nodo::getSgte() const {
    return sgte;
}

void Nodo::setSgte(Nodo *sgte) {
    Nodo::sgte = sgte;
}

string Nodo::getDato1() const{
    return dato1;
}

void Nodo::setDato1(string dato1){
    Nodo::dato1 = dato1;
}

int Nodo::getDato2() const{
    return dato2;
}

void Nodo::setDato2(int dato2){
    Nodo::dato2 = dato2;
}

int Nodo::getPuntero() const {
    return puntero;
}

void Nodo::setPuntero(int puntero) {
    Nodo::puntero = puntero;
}

