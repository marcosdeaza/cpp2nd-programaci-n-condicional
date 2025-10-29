// Programa 5 Tema 5.1 Programación Condicional Marcos de Aza
// Programa: Verificación de Notas para Pasar de Curso

#include <iostream>

using namespace std;

int main() {
    float matematicas, fisica, literatura; // Declara variables para las notas
    float total; // Declara una variable para almacenar el total de las notas

    // Solicita al usuario que ingrese las notas
    cout << "Ingrese la nota de Matemáticas (0-100): ";
    cin >> matematicas;
    cout << "Ingrese la nota de Física (0-100): ";
    cin >> fisica;
    cout << "Ingrese la nota de Literatura (0-100): ";
    cin >> literatura;

    // Calcula el total de las tres asignaturas
    total = matematicas + fisica + literatura;

    // Verifica si el usuario cumple con las condiciones para pasar de curso
    if (matematicas >= 50 && fisica >= 55 && literatura >= 45 &&
        total >= 170 && (matematicas + fisica) >= 120) {
        cout << "¡Cumples con los requisitos para pasar de curso!" << endl; // Mensaje de aprobado
        } else {
            cout << "No cumples con los requisitos para pasar de curso." << endl; // Mensaje de no aprobado
        }

    return 0; // Indica que el programa terminó correctamente
}
