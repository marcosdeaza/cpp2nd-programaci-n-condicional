// Programa 1 Tema 5.1 Programación Condicional Marcos de Aza
//Indicador de número positivo, negativo o cero

#include <iostream>

using namespace std;

int main() {
    int numero; // Declara una variable para almacenar un número
    cout << "Ingrese un número: "; // Solicita al usuario que ingrese un número
    cin >> numero; // Lee el número ingresado por el usuario

    // Verifica si el número es negativo
    if (numero < 0) {
        cout << "El número es negativo"; // Imprime que el número es negativo
    }
    // Verifica si el número es positivo
    else if (numero > 0) {
        cout << "El número es positivo"; // Imprime que el número es positivo
    }
    // Si no es ni negativo ni positivo, debe ser cero
    else {
        cout << "El número es cero"; // Imprime que el número es cero
    }

    return 0; // Indica que el programa terminó correctamente
}

