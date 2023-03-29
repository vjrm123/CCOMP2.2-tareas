#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << setw(10) << "Longitud " << setw(15) << " Area de Superficie" << setw(12) << " Volumen" << endl;


    for (int longitud = 0; longitud <= 4; longitud++) {
        int area = 6 * longitud * longitud;
        int volumen = longitud * longitud * longitud;


        cout << setw(10) << longitud << setw(15) << area << setw(12) << volumen << endl;
    }

    return 0;
}