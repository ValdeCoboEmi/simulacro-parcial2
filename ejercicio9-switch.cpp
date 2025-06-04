/*
    Días en un Mes
    Pide el número de un mes y muestra cuántos días tiene.
*/

#include <iostream>
using namespace std;

int main()
{

    // Declaracion del mes
    int moth;

    cout << "Porfavor ingrese un mes, digitando el numero correspondiente :" << endl
         << "1. Enero" << endl
         << "2. Febrero" << endl
         << "3. Marzo" << endl
         << "4. Abril" << endl
         << "5. Mayo" << endl
         << "6. Junio" << endl
         << "7. Julio" << endl
         << "8. Agosto" << endl
         << "9. Septiembre" << endl
         << "10. Octubre" << endl
         << "11. Noviembre" << endl
         << "12. Diciembre" << endl
         << "Ingrese porfavor: ";
    cin >> moth;

    switch (moth)
    {
    case 1:
        cout << "Tiene 31 dias" << endl;
        break;
    case 2:
        cout << "Tiene 28 dias" << endl;
        break;
    case 3:
        cout << "Tiene 31 dias" << endl;
        break;
    case 4:
        cout << "Tiene 30 dias" << endl;
        break;
    case 5:
        cout << "Tiene 31 dias" << endl;
        break;
    case 6:
        cout << "Tiene 30 dias" << endl;
        break;
    case 7:
        cout << "Tiene 31 dias" << endl;
        break;
    case 8:
        cout << "Tiene 31 dias" << endl;
        break;
    case 9:
        cout << "Tiene 30 dias" << endl;
        break;
    case 10:
        cout << "Tiene 31 dias" << endl;
        break;
    case 11:
        cout << "Tiene 30 dias" << endl;
        break;
    case 12:
        cout << "Tiene 31 dias" << endl;
        break;
    default:
        cout << "Ingrese un rango correcto" << endl;
        break;
    }

    return 0;
}