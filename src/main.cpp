#include <iostream>
#include "enlace.h"

using namespace std;

// Prototipos de las funciones del menú
void imprimirMenuPrincipal();
void imprimirMenuEjercicios();
void imprimirMenuProblemas();

void ejecutarEjercicio(int opcion);
void ejecutarProblema(int opcion);

void salir();


int main()
{
    int opcion;

    imprimirMenuPrincipal();

    cin >> opcion;

    return 0;
}


void imprimirMenuPrincipal()
{
    cout << "===================================" << endl;
    cout << "       PRACTICA 1 - INFORMATICA II" << endl;
    cout << "===================================" << endl;
    cout << "1 - Ejercicios" << endl;
    cout << "2 - Problemas" << endl;
    cout << "0 - Salir" << endl;
    cout << "===================================" << endl;
    cout << "=> ";
}
