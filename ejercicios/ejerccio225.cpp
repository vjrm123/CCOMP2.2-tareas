#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros enteros: ";
    cin >> a >> b >> c;

    if (c % a == 0 && c % b == 0) {
        cout << a << " y " << b << " son factores de " << c << endl;
    } else {
        cout << a << " y " << b << " no son factores de " << c << endl;
    }

    return 0;
}