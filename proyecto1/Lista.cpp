//
// Created by Mariana Muñoz on 13/03/23.
//
#include <iostream>
#include <fstream>
#include "Lista.h"
#include <string>
#include <stdlib.h>
#include "Nodo.h"
#include <vector>
using namespace std;


Lista ::Lista() {head = NULL; cola = NULL;}


void Lista::crearLista(){
    head = NULL;
    cola = NULL;
    string n;
    int x;

    ifstream infile("infoHotel.txt");
    while(infile >> n >> x){
        head = insertarALaCabeza(n,x);
    }
    infile.close();

}

 Nodo *Lista::insertarALaCabeza( string nombre, int entrada){
    Nodo *nuevo;
    nuevo = new Nodo(nombre,entrada,  head, cola);
    nuevo->sgte =head;
    nuevo->previo = nullptr;
    if(head != NULL){
        head->previo = nuevo;
    }else{
        cola= nuevo;
    }
    head = nuevo;
    return nuevo;
}

void Lista::ingresarNuevoHuesped() {
    ifstream archivo;
    string texto;
    string linea;
    archivo.open("infoHotel.txt",ios::in);
    while(!archivo.eof()){
        getline(archivo, texto);
        linea = linea + texto + "\n";
    }
    archivo.close();

    ofstream archivo2("infoHotel.txt");
    string nombre;
    int numHbitacion;
    cout<< "Ingrese nombre del nuevo huesped";
    cin >> nombre;
    cout<< "Ingrese Habitación del nuevo huesped";
    cin>> numHbitacion;

    archivo2<<linea<<nombre<<"\n"<<numHbitacion;

}

Nodo* Lista::buscarHuesped(string huesped) {
    Nodo* actual = head;
    while(actual != nullptr){
        if(actual->getDato1() == huesped){
            return actual;
        }
        actual = actual->getSgte();
    }
    return NULL;
}

void Lista::visualizarListaDerecha() {
    Nodo *temp;
    int k= 0;
    temp = cola;
    while(temp!= NULL){
        char c;
        k++;
        c = (k %4 != 0 ? ' ' : '\n');
        cout <<temp->getDato1() << " : "<< temp->getDato2() <<" | "<<c;
        temp = temp->getPrevio();
    }
}
Nodo* Lista::buscarHabitacion(int habitacion) {
    Nodo* actual = head;
    while(actual != nullptr){
        if(actual->getDato2() == habitacion){
            return actual;
        }
        actual = actual->getSgte();
    }
    return NULL;
}

Nodo * Lista::mirarvecinos(int habitacion) {
    Nodo *actual = head;
    while(actual != nullptr){
        if(actual->getDato2() == habitacion){
            return actual;
        }
        actual = actual->getSgte();

    }
    return NULL;
}


















