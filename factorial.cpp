#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial de un número
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Variables globales para el saldo
double saldo = 20000.0;

// Función para consultar el saldo
void consultarSaldo()
{
    cout << "El saldo actual es: $" << saldo << endl;
}

// Función para retirar efectivo
void retirarEfectivo()
{
    double monto;
    cout << "Introduce el monto a retirar: $";
    cin >> monto;
    if (monto <= saldo)
    {
        saldo -= monto;
        cout << "Has retirado $" << monto << ". El nuevo saldo es: $" << saldo << endl;
    } else {
        cout << "Saldo insuficiente." << endl;
    }
}

// Función de menú para el cajero automático
void cajeroAutomatico() {
    int opcion;
    do {
        cout << "\nCajero Automático\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                consultarSaldo();
                break;
            case 2:
                retirarEfectivo();
                break;
            case 3:
                cout << "Saliendo del cajero automático." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
        }
    } while (opcion != 3);
}

int main()
{
    int opcion;
    do {
        cout << "\nMenu de inicio\n";
        cout << "1. Calcular factorial\n";
        cout << "2. Usar cajero\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;
        switch (opcion)
        {
            case 1: {
                int numero;
                cout << "Introduce un número para calcular su factorial: ";
                cin >> numero;
                cout << "El factorial " << numero << "!=" << factorial(numero) << endl;
                break;
            }
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion != 3);

    return 0;
}