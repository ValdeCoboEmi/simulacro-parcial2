/*
    Contar Números Pares e Impares
Llena un arreglo con N números y cuenta cuántos son pares y cuántos son impares.
*/

#include <iostream>
using namespace std;

int main()
{

    // Declaracion del n
    int n, par = 0, impar = 0;
    // Se le solicita al usuario la cantidad de elementos
    cout << "Ingrese el numero de elementos que quiere: ";
    cin >> n;

    // declaracion del array
    int numeros[n];

    //For para rellenar el arreglo 
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el " << i + 1 << ": ";
        cin >> numeros[i];
    }

    //For para contar si es par o impar
    for (int i = 0; i < n; i++)
    {
        if ((numeros[i] % 2) == 0)
        {
            par++;
        }
        else{
            impar++;
        }
        
    }

    //Se le imprime la cantidad de par y impar que hay
    cout << "Par: " << par << endl;
    cout << "Impar: " << impar << endl;
    
    return 0;
}