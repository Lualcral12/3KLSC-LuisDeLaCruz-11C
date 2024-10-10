#include <iostream>
#include <string>
using namespace std;

void generarTablas() {
    int cantidad_tablas, resultado;
    int tabla = 1;
    int multiplicador;
    string input;

    cout << "\n¿Cuantas tablas deseas generar?: ";
    cin >> input;

    cantidad_tablas = stoi(input);
    cin.ignore();

    while (tabla <= cantidad_tablas) {
        multiplicador = 10;
        while (multiplicador >= 1) {
            resultado = tabla * multiplicador;
            cout << tabla << " * " << multiplicador << " = " << resultado << endl;
            multiplicador--;
        }
        cout << "Presiona una tecla para continuar:";
        cin.get();
        tabla++;
    }
}

void generarTablaEspecifica() {
    int numero, resultado;
    int multiplicador = 1;
    string input;

    cout << "\nIngresa un numero para generar su tabla: ";
    cin >> input;

    numero = stoi(input);
    cin.ignore();

    while (multiplicador <= 12) {
        resultado = numero * multiplicador;
        cout << numero << " * " << multiplicador << " = " << resultado << endl;
        multiplicador++;
    }

    cout << "Presiona una tecla para continuar:";
    cin.get();
}

int main() {

    generarTablas();
    generarTablaEspecifica();



}