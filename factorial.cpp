#include <iostream>

using namespace std;

int factorial(int numero)
{
    if (numero == 0)
        return 1;
    else
        return numero * factorial(numero - 1);
}

int main()
{
    int numero;
    cout << "Introduce un numero factorial a calcular" << endl;
    cin >> numero;

    int resultado = factorial(numero);
    
    cout << "El factorial " << numero << "!=" << resultado << endl;
    return 0;
}