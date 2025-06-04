//Números Pares del 1 al 50
//Muestra en pantalla los números pares del 1 al 50.

#include <iostream>

using namespace std;

int main(){
    //Comienzo del ciclo for donde comienza desde 1 y termina en 50
    for (int i = 1; i <= 50; i++)
    {
        //Se divide entre 2 con el modular y si da 0 entonces es par entonces se mete a la condicion y se imprime
        if ((i % 2) == 0)
        {
            cout << i << " ";
        }
        
    }
    
    return 0;
}