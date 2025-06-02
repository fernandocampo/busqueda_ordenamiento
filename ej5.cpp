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
    int cantidad;
};

void cargar(Ventas semana[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << "Cargar venta de la semana " << i + 1 << ":" << endl;

        cout << "Ingresar producto: ";
        cin >> semana[i].producto;

        cout << "Ingresar precio: ";
        cin >> semana[i].precio;

        cout << "Ingresar cantidad: ";
        cin >> semana[i].cantidad;
    }
}

void imprimir(Ventas semana[], int cant) {
    float totalSemana = 0;
    for (int i = 0; i < cant; i++) {
        float totalVenta = semana[i].precio * semana[i].cantidad;
        totalSemana += totalVenta;
    }
}


int main () {
    const int TAM = 7;
    Ventas semana[TAM];


    cargar(semana, TAM);
    imprimir(semana, TAM);
    
    return 0;
}