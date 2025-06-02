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

void stockBajo(Producto productos[], int cant) {
    for (int i = 0; i < cant; i++) {
        if (productos[i].cantidad < 10) {
            cout << "Producto: " << productos[i].nombre;
            cout << ", Stock: " << productos[i].cantidad << endl;
        }
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
    const int TAM = 5;
    Producto productos[TAM];
    int stockBuscado;

    cargar(productos, TAM);
    imprimir(productos, TAM);

    cout << "---productos ordenados por stock de menor a mayor---" << endl;
    burbujeo(productos, TAM);
    imprimir(productos, TAM);

    cout << "Productos con stock especifico" << endl;
    cin >> stockBuscado;

    int pos = buscarSecuencial(productos, TAM, stockBuscado);
    if (pos != -1) {
        cout << "Producto encontrado: " << productos[pos].nombre 
             << " con stock " << productos[pos].cantidad << endl;
    } else {
        cout << "No hay productos con esa cantidad de stock." << endl;
    }

    cout << "Productos con stock bajo" << endl;
    stockBajo(productos, TAM);

    
    return 0;
}