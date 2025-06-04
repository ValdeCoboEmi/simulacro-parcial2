//Suma de los Primeros N Números
//Solicita un número N al usuario y calcula la suma de los primeros N números naturales.
#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cout << "Ingrese el numero que quiera sacarle el factorial: ";
    cin >> n;
    //Comienzo del ciclo 
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "El resultado de la suma es: " << sum;
    return 0;
}