#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero ingresado es par." << endl;
    } else {
        cout << "El numero ingresado no es par." << endl;
    }

    return 0;
}
