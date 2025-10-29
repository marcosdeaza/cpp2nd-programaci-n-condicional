// Programa 3 Tema 5.1 Programación Condicional Marcos de Aza
// Programa: Verificación de carácter

#include <iostream>

using namespace std;

int main() {
    char caracter; // Declara una variable para almacenar el carácter ingresado
    cout << "Ingrese un carácter: "; // Solicita al usuario que ingrese un carácter
    cin >> caracter; // Lee el carácter ingresado por el usuario

    // Verifica si el carácter es una letra mayúscula
    if (caracter >= 'A' && caracter <= 'Z') {
        cout << "Es una letra mayúscula." << endl; // Mensaje para letras mayúsculas
    }
    // Verifica si el carácter es una letra minúscula
    else if (caracter >= 'a' && caracter <= 'z') {
        cout << "Es una letra minúscula." << endl; // Mensaje para letras minúsculas
    }
    // Si no es una letra del alfabeto
    else {
        cout << "No está en el alfabeto." << endl; // Mensaje para caracteres no alfabéticos
    }

    return 0; // Indica que el programa terminó correctamente
}

