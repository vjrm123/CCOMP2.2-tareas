

#include <iostream>
using namespace std;

int main() {
  int num1, num2, sum;

  cout << "Ingrese dos números enteros: ";
  cin >> num1 >> num2;

  sum = num1 + num2;

  cout << "El primer número es " << (num1 % 2 == 0 ? "par" : "impar") <<endl;
  cout << "El segundo número es " << (num2 % 2 == 0 ? "par" : "impar") <<endl;
  cout << "La suma de los dos numeros ingresado es: " <<sum<<endl; 

  return 0;
}