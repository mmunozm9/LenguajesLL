#include <iostream>
#include <string>
#ifndef PROYECTO1_HABITACION_H
#define PROYECTO1_HABITACION_H
using namespace std;

class Habitacion {
protected:
    string dato1;
    int dato2;



public:
    Habitacion();

    Habitacion( string dato1, int dato2);

    string getDato1() const;

    void setDato1(string dato1);

    int getDato2() const;

    void setDato2(int dato2);
};


#endif //PROYECTO1_HABITACION_H
