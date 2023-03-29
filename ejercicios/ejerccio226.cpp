#include <iostream>
using namespace std;

int main() {
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";


    cout<<"DE AQUI ES OTRA OPCION!!!!!!!!"<<endl; 

    for(int i = 0; i < 8; i++) {
        if(i % 2 == 0) {
            cout << "* * * * * * * *\n";
        } else {
            cout << " * * * * * * * *\n";
        }
    }
    return 0;

}