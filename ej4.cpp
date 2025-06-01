/*
Ejercicio 4: Sistema de Calificaciones
Crear un programa que maneje un vector de 10 calificaciones:
Usar Insertion Sort para ordenar las calificaciones
Usar Búsqueda Binaria para verificar si una calificación específica existe
Mostrar la calificación más alta y más baja

*/

#include <iostream>
#include <iomanip> 
using namespace std;

void cargar (float calificaciones[], int cant) {
    for (int i = 0; i < cant; i++)
    {
        cout << "Cargar la nota" << endl;
        cin >> calificaciones[i];
    }
    
}

void imprimir(float calificaciones[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << fixed << setprecision(2) << calificaciones[i] << endl;
    }
}

void insercion(float calificaciones[], int n) {
    float key;
    int j;
    for (int i = 1; i < n; i++)
    {
        key = calificaciones[i];
        j = i - 1;

        while (j >= 0 && calificaciones[j] > key) {
            calificaciones[j+1] = calificaciones[j];
            j = j - 1;
        }
        calificaciones[j+1] = key;
    }
}

/* el arreglo tiene q estar odenado*/
int busquedaBinaria (float calificaciones[], int TAM, float numero_a_buscar) {
    int inicio = 0;
    int fin = TAM - 1;

    while (fin >= inicio) {
        int mitad = inicio + (fin - inicio) / 2;
        if (calificaciones[mitad] == numero_a_buscar)
            return mitad;
        if (calificaciones[mitad] > numero_a_buscar) {
            fin = mitad - 1; 
        } else {
            inicio = mitad + 1;
        }
    }
    return -1;
}

int main () {
    const int TAM = 10;
    float calificaciones[TAM];
    float nota_a_buscar;

    cargar(calificaciones, TAM); 

    cout << "Notas ingresadas" << endl;

    imprimir(calificaciones, TAM);
    
    insercion(calificaciones, TAM);

    cout << "Notas ordenadas de menor a mayor" << endl;
    imprimir(calificaciones, TAM);

    cout << fixed << setprecision(2);
    cout << "la nota mas baja fue " << calificaciones[0] << endl;
    cout << "la nota mas alta fue " << calificaciones [TAM-1] << endl;

    cout << "Que nota queres buscar?" << endl;
    cin >>  nota_a_buscar;

    int posicion = busquedaBinaria(calificaciones, TAM, nota_a_buscar);

    if (posicion != -1) {
        cout << "La nota " << nota_a_buscar << " se encontro" << endl;
    } else {
        cout << "La nota " << nota_a_buscar << " no se encontro" << endl;
    }
    
    return 0;
}