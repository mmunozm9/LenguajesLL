#include <iostream>
#include "Lista.h"

int main() {
    int num = 0;
    while(num != -1) {
        Lista lista;
        lista.crearLista();
        cout << "Ingresa 1 para mostrar los huespedes en orden alfabetico" << " \n ";
        cout << "Ingresa 2 para mostrar la lista de huespedes en orden de llegada" << " \n ";
        cout << "Ingresa 3 para ingresar un nuevo huesped" << " \n ";
        cout << "Ingresa 4 para buscar usuario existente" << " \n ";
        cout << "Ingresa 5 para consultar vecinos" << " \n ";
        cout << "Ingresa 6 para ver habitaciones disponibles" << " \n ";
        cout <<"Ingresa 7 para ver si la habitación esta ocupada" << " \n ";
        cout <<"Ingrese 8 para eliminar un huesped";



        int opcion;
        cin >> opcion;
        if (opcion == 2) {
            Lista lista;
            lista.crearLista();

            lista.visualizarListaDerecha();
        }
        if (opcion == 3) {
            Lista lista;
            lista.crearLista();
            lista.ingresarNuevoHuesped();
        }
        if (opcion == 4) {
            Lista lista;
            lista.crearLista();
            string nombre;

            int numOpcion;
            cout << "Ingrese 1 para buscar por habitacion" << " \n ";
            cout << "Ingrese 2 para buscar por nombre del huesped";
            cin >> numOpcion;
            if (numOpcion == 1) {
                Lista lista;
                lista.crearLista();
                int numHabitacion;
                cout << "Ingrese el número de la habitación";
                cin >> numHabitacion;

                Nodo *tempBuscarHabitacion = lista.buscarHabitacion(numHabitacion);
                if (tempBuscarHabitacion != NULL) {
                    cout << "El huesped es: " << tempBuscarHabitacion->getDato1() << endl;
                } else {
                    cout << "No se encontro huesped" << endl;
                }
            }
            if (numOpcion == 2) {
                Lista lista;
                lista.crearLista();
                string nombreHues;
                cout << "Ingrese el nombre del huesped";
                cin >> nombreHues;

                Nodo *tempBuscarHuesped = lista.buscarHuesped(nombreHues);
                if (tempBuscarHuesped != NULL) {
                    cout << "El huesped esta en la habitación: " << tempBuscarHuesped->getDato2() << endl;
                } else {
                    cout << "No se encontro huesped" << endl;
                }
            }

            cout << "Ingrese 0 si desea continuar o ingrese -1 si desea finalizar";
            cin >> num;

        }
        if(opcion == 5){
            int numhabit;
            cout << "Ingrese el numero de la habitación";
            cin >> numhabit;
            Nodo *tempBuscarHab = lista.mirarvecinos(numhabit);
            if (tempBuscarHab!= NULL) {
                cout << "Vecino siguiente: "<< tempBuscarHab->getPrevio()->getDato1() <<" \n ";
                cout << "Vecino anterior: "<<tempBuscarHab->getSgte()->getDato1() <<" \n ";
            } else {
                cout << "No hay vecinos" << endl;
            }
        }

        if(opcion == 7){

            int numhabit;
            cout << "Ingrese el numero de la habitación";
            cin >> numhabit;
            Nodo *tempBuscarHab = lista.buscarHabitacion(numhabit);
            if (tempBuscarHab!= NULL) {
                cout << "El habitacion esta ocupada"<<" \n ";
            } else {
                cout << "La habitación esta libre" << endl;
            }
        }

        if(opcion==8){
            int numhabit;
            cout << "Ingrese el numero de la habitación";
            cin >> numhabit;
            Nodo *tempElimiar = lista.eliminar(numhabit);
            if (tempElimiar!= NULL) {
                cout<<"Usuario eliminado" <<" \n ";
            } else {
                cout << "No se encontro usuario" << endl;
            }
        }

    }
    return 0;
}



