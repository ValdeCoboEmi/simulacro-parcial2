/*
Adivina el Número
Genera un número aleatorio entre 1 y 100. El usuario debe adivinarlo, y el programa debe indicar si el número es mayor o menor hasta que lo acierte.
*/

#include <iostream>

using namespace std;

int main(){

    //Declaracion del numero aleatroio
    int numRandom = 45;
    int num;
    //Booleano para llevar el ciclo while hasta que lo adivine
    int adivinado = false;
    
    //Se va a repetir el ciclo while hasta que 
    while (adivinado != true)
    {
        //Se le solicita
        cout << "Porfavor ingrese un numero: ";
        cin >> num;

        //Se compara
        if (num > numRandom)
        {
            cout << "El numero es menor" << endl;
            cout << "-------------------" << endl;
        }
        else if (num < numRandom)
        {
            cout << "El numero es mayor" << endl;
            cout << "-------------------" << endl;
        }
        else if(num == numRandom){
            adivinado = true;
        }
        else{
            cout << "Ingrese porfavor algo correcto" << endl;
        }
    }

    cout << "Has adiviando el numero, felicidades" << endl;
    
    return 0;
}