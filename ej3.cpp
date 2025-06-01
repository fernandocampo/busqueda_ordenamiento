/*
Ejercicio 3: Burbujeo Simple
Crear un programa que:
Permita ingresar 7 temperaturas diarias (números decimales)
Ordene las temperaturas de menor a mayor usando Burbujeo
Muestre el resultado final
*/

#include <iostream>
using namespace std;

void cargar (float temperaturas[], int cant) {
    for (int i = 0; i < cant; i++)
    {
        cout << "Cargar la temperatura" << endl;
        cin >> temperaturas[i];
    }
    
}

void imprimir(float temperaturas[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << temperaturas[i] << endl;
    }
}

void burbujeo (float temperaturas[], int n) {
    int i = 0;
    float aux;
    bool ordenado = false;
 
    while (i < n && !ordenado) {
        ordenado = true;
        for (int j = 0; j < n-i-1 ; j++) 
        {
            if (temperaturas[j] > temperaturas[j+1]) {
                aux = temperaturas[j];
                temperaturas[j] = temperaturas[j+1];
                temperaturas[j+1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}


int main () {
    const int TAM = 7;
    float temperaturas[TAM];

    cargar(temperaturas, TAM); 

    cout << "Temperaturas ingresadas" << endl;
    imprimir(temperaturas, TAM);
    
    burbujeo(temperaturas, TAM);

    cout << "Temperatura ordenadas de menor a mayor" << endl;
    imprimir(temperaturas, TAM);

    
    return 0;
}