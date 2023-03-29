#include <iostream>

using namespace std;

int main() {
    int num, a1, a2, a3, a4;

    cout << "Ingrese un numero numeros enteros seguidos sin espacio: ";
    cin >> num;

    

    a4 = num % 10;
    num /= 10;
    a3 = num % 10;
    num /= 10;
    a2 = num % 10;
    num /= 10;
    a1 = num % 10;

    cout << "invirtiendo los numeros: " << a4 << "  " << a3 << "  " << a2 << "  " << a1 << endl;
    
    cout<<"pipi"<<endl;
    cout<<"pipi"<<endl;
    return 0;
}