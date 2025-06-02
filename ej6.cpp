/*

Ejercicio 6: Inventario de Productos
Crear un programa que maneje un inventario de 12 productos (stock):
Usar Burbujeo Mejorado para ordenar por cantidad de stock
Usar Búsqueda Secuencial para buscar productos con stock específico
Identificar productos con stock bajo (menos de 10 unidades)
*/

#include <iostream>
using namespace std;

struct Producto {
    string nombre;
    int cantidad;
};

void cargar(Producto productos[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << "Producto " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> productos[i].nombre;
        cout << "Cantidad en stock: ";
        cin >> productos[i].cantidad;
    }
}

void imprimir(Producto productos[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << "Producto: " << productos[i].nombre << ", Stock: " << productos[i].cantidad << endl;
    }
}

void burbujeo(Producto productos[], int n) {
    int i = 0;
    bool ordenado = false;
 
    while (i < n && !ordenado) {
        ordenado = true;
        for (int j = 0; j < n - i - 1; j++) {
            if (productos[j].cantidad > productos[j + 1].cantidad) {
                Producto aux = productos[j];
                productos[j] = productos[j + 1];
                productos[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

int buscarSecuencial(Producto productos[], int cant, int valorBuscado) {
    for (int i = 0; i < cant; i++) {
        if (productos[i].cantidad == valorBuscado) {
            return i;
        }
    }
    return -1;
}



int main () {
    const int TAM = 12;
    Productos productos[TAM];


    cargar(productos, TAM);
    imprimir(productos, TAM);
    
    return 0;
}