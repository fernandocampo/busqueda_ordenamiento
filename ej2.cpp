/*

Ejercicio 2: Insertion Sort Básico
Crear un programa que:
Permita ingresar 6 notas de estudiantes (enteros del 1 al 10)
Ordene las notas de menor a mayor usando Insertion Sort
Muestre las notas antes y después del ordenamiento

*/


#include <iostream>
using namespace std;

void cargar (int notas[], int cant) {
    for (int i = 0; i < cant; i++)
    {
        cout << "ingresar una nota entera del 1 al 10" << endl;
        cin >> notas[i];
    }
    
}

void imprimir(int notas[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << notas[i] << endl;
    }
}

void insertionSort (int notas[], int n) {
    int i, key, j;

    for (int i = 1; i < n; i++)
    {
        key = notas[i];
        j = i - 1;

        while (j >= 0 && notas[j] > key)
        {
            notas[j + 1] = notas[j];
            j = j - 1;
        }
        notas [j + 1] = key;
    }
    
}

int main () {
    const int TAM = 6;
    int notas[TAM];

    cargar(notas, TAM); 

    cout << "Notas ingresadas" << endl;
    imprimir(notas, TAM);
    
    insertionSort(notas, TAM);

    cout << "Notas ordenadas de menor a mayor" << endl;
    imprimir(notas, TAM);

    
    return 0;
}