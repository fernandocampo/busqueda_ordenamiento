/*
Ejercicio 1: Búsqueda Secuencial
Crear un programa que:
Permita al usuario ingresar 8 números enteros en un vector
Permita buscar un número específico
Informe si el número está presente y en qué posición
Si no está, mostrar "Número no encontrado"
*/

#include <iostream>
using namespace std;

void cargar (int vec[], int cant) {
    for (int i = 0; i < cant; i++)
    {
        cout << "ingresar un numero entero" << endl;
        cin >> vec[i];
    }
    
}

void imprimir(int vec[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << "Posicion: " << i << " Valor: " << vec[i] << endl;
    }
}

int buscarSecuencial (int vec[], int cant, int valor) {
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == valor) {
            return i;
        }
    }
    
    return -1;
}

int main () {
    const int TAM = 8;
    int vec[TAM];
    int valor;
    cargar(vec, TAM); 
    imprimir(vec, TAM);
    
    cout << "Ingresa el numero q queres buscar" << endl;
    cin >> valor;

    int posicion = buscarSecuencial(vec, TAM, valor);

    if (posicion != -1) {
        cout << valor << "fue encontrado en la la posicion "<< posicion << endl;
    } else
    {
        cout << "no se encontro el numero " << endl;
    }
    
    return 0;

}