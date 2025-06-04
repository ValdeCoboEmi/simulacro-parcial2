//Tarifa de Luz Eléctrica
//Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.

#include <iostream>

using namespace std;

int main(){
    //declaracion de variable
    int kWh;
    //Se le pide el consumo
    cout << "Bienvenido a la calculadora de la tarifa de Luz Electrico" << endl;
    cout << "Por, favor ingrese el consumo de (kWh): ";
    cin >> kWh;

    //Se comienza con la comparacion del kwh para comenzar
    if (kWh >= 0 && kWh < 100)
    {
        //Se imprime y el resultado se multiplica por el monto que va a la tarifa
        cout << "Tiene un consumo de "<< kWh << " kWh que es tarifa menor que equivale a ($0.25) y tiene que pagar: $" << (kWh*0.25) << endl;
    }
    else if (kWh >= 100 && kWh <= 200)
    {
        //Se imprime y el resultado se multiplica por el monto que va a la tarifa
        cout << "Tiene un consumo de "<< kWh << "  kWh que es tarifa medida que equivale a ($1) y tiene que pagar: $" << (kWh*1) << endl;
    }
    else if (kWh > 200)
    {
        //Se imprime y el resultado se multiplica por el monto que va a la tarifa
        cout << "Tiene un consumo de "<< kWh << " kWh que es tarifa alta que equivale a ($2) y tiene que pagar: $" << (kWh*2) << endl;
    }
    else{
        cout << "Has ingresado incorrectamente el dato, vuelva a intentarlo" << endl;
    }
    
    return 0;
}