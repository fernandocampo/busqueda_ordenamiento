/*
Ejercicio 4: Sistema de Calificaciones
Crear un programa que maneje un vector de 10 calificaciones:
Usar Insertion Sort para ordenar las calificaciones
Usar Búsqueda Binaria para verificar si una calificación específica existe
Mostrar la calificación más alta y más baja

*/

#include <iostream>
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
        cout << calificaciones[i] << endl;
    }
}

void insercion(float calificaciones[], int n) {
    int  key, j;
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





int main () {
    const int TAM = 3;
    float calificaciones[TAM];

    cargar(calificaciones, TAM); 

    cout << "Notas ingresadas" << endl;
    imprimir(calificaciones, TAM);
    
    insersion(calificaciones, TAM);

    cout << "Notas ordenadas de menor a mayor" << endl;
    imprimir(calificaciones, TAM);

    
    return 0;
}