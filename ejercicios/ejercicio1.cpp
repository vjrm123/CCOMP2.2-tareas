#include <iostream>
using namespace std;

int main() {
    int radio;
    const float pi = 3.1415;
    cout << "Ingrese el radio del circulo como un numero entero: ";
    cin >> radio;

    int diametro = 2 * radio;
    float circunferencia = 2 * pi * radio;
    float area = pi * radio * radio;

    cout << "El diametro del circulo es: " << diametro << endl;
    cout << "La circunferencia del circulo es: " << circunferencia << endl;
    cout << "El area del circulo es: " << area << endl;

    return 0;
}