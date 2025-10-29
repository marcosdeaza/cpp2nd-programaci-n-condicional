// Programa 2 Tema 5.1 Programación Condicional Marcos de Aza
// Programa Ejercicio 2: Días de la Semana

#include <iostream>

using namespace std;

// Función principal del programa
int main() {
    int dia; // Declara una variable para almacenar el número del día
    cout << "Dime un número y te diré el día al que pertenece: "; // Solicita al usuario un número
    cin >> dia; // Lee el número ingresado por el usuario

    // Estructura switch para determinar el día de la semana
    switch (dia) {
        case 1: // Si el número es 1
            cout << "Lunes" << endl; // Imprime "Lunes"
            break;
        case 2: // Si el número es 2
            cout << "Martes" << endl; // Imprime "Martes"
            break;
        case 3: // Si el número es 3
            cout << "Miércoles" << endl; // Imprime "Miércoles"
            break;
        case 4: // Si el número es 4
            cout << "Jueves" << endl; // Imprime "Jueves"
            break;
        case 5: // Si el número es 5
            cout << "Viernes" << endl; // Imprime "Viernes"
            break;
        case 6: // Si el número es 6
            cout << "Sábado" << endl; // Imprime "Sábado"
            break;
        case 7: // Si el número es 7
            cout << "Domingo" << endl; // Imprime "Domingo"
            break;
        default: // Para cualquier otro número
            cout << "Número inválido. Debe estar entre 1 y 7." << endl; // Mensaje de error
    }

    return 0; // Indica que el programa terminó correctamente
}

