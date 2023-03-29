 #include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter o un numero para verificar su equivalente: ";
    cin >> c;
    cout << "El equivalente entero de " << c << " es: " << static_cast<int>(c) << endl;
    return 0;
}