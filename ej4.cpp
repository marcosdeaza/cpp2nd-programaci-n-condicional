// Programa 4 Tema 5.1 Programación Condicional Marcos de Aza
// Programa: Calculadora Simple con Operaciones

#include <iostream>

using namespace std;

int main() {
    double num1, num2; // Declara variables para almacenar los números ingresados
    char operacion; // Declara una variable para almacenar el carácter de operación

    // Solicita al usuario que ingrese dos números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Solicita al usuario que ingrese un carácter para la operación
    cout << "Ingrese la operación (s: suma, r: resta, m: multiplicación, d: división): ";
    cin >> operacion;

    // Estructura switch para determinar la operación
    switch (operacion) {
        case 's': // Suma
            cout << "Resultado: " << (num1 + num2) << endl; // Imprime el resultado de la suma
            break;
        case 'r': // Resta
            cout << "Resultado: " << (num1 - num2) << endl; // Imprime el resultado de la resta
            break;
        case 'm': // Multiplicación
            cout << "Resultado: " << (num1 * num2) << endl; // Imprime el resultado de la multiplicación
            break;
        case 'd': // División
            // Verifica que no se esté dividiendo por cero
            if (num2 != 0) {
                cout << "Resultado: " << (num1 / num2) << endl; // Imprime el resultado de la división
            } else {
                cout << "Error: División por cero no permitida." << endl; // Mensaje de error
            }
            break;
        default: // Para cualquier otro carácter
            cout << "Operación no válida." << endl; // Mensaje de error
    }

    return 0; // Indica que el programa terminó correctamente
}

