/*
Ejercicio 5: Ventas Diarias (PUP)
Crear un programa para registrar ventas diarias de una semana:
Usar un vector de 7 posiciones (lunes=0, martes=1, etc.)
Permitir cargar ventas por día de la semana
Usar PUP para consultar la venta de un día específico
Mostrar el total de ventas de la semana
*/

#include <iostream>
using namespace std;

struct Ventas {
    string producto;
    float precio;
    float cantidad;
};

void cargar (int semana[], int cant) {
    for (int i = 0; i < cant; i++)
    {
        cout << "cargar ventas de la semana" << endl;
        cin >> semana[i];
        cout << "ingresar producto" << endl;
        cin >> producto;

        cout << "ingresar precio" << endl;
        cin >> precio;

        cout << "cantidad" << endl;
        cin >> cantidad;
    }
    
}

void imprimir(float semana[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << semana[i] << endl;
    }
}

int main () {
    const int TAM = 7;
    int semana[TAM];
    float precio;
    int cantidad;
    string producto;

    Ventas venta;

    cargar(semana, TAM); 
    
    return 0;
}