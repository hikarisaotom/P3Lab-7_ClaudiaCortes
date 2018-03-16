#include <fstream>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include "Racional.h"

int menu();

 int main()
{
    bool Continuar = 1;

    while (Continuar)
    {
        //Llamado del menu del programa.
        switch (menu())
        {
        case 1:
        { //
            cout << "Usted selecciono: Suma" << endl;

            break;
        } //Fin del case 1.
        case 2:
        { //
            cout << "Usted selecciono: Resta" << endl;

            break;
        } //Fin del case 2

        case 3:
        { //
            cout << "Usted selecciono: MUltiplicacion" << endl;

            break;
        } //Fin del case 3

        case 4:
        { //
            cout << "Usted selecciono: Division" << endl;

            break;
        } //Fin del case 4.
        case 5:
        { //
            cout << "Usted selecciono: +=" << endl;

            break;
        } //Fin del case 5.
        case 6:
        { //
            cout << "Usted selecciono: -=" << endl;

            break;
        } //Fin del case 6.
        case 7:
        { //
            cout << "Usted selecciono: *=" << endl;

            break;
        } //Fin del case 7.
        case 8:
        { //
            cout << "Usted selecciono: /=" << endl;

            break;
        } //Fin del case 8.
        default:
        { //
            cout << "Usted esta saliendo" << endl;
            Continuar = 100;
            break;
        } //FIn del default

        } //Fin del switch.
        cout << "Desea Continuar en el sistema?[0/1]" << endl;
        cin >> Continuar;
    } //FIn del while.
    return 0;
}

//Menu principal del programa
int menu()
{
    int Respuesta = -100;
    while (Respuesta <= 0 || Respuesta > 9)
    {
        cout << "Bienvenido al laboratorio # 7" << endl
             << "Seleccione la opcion que desea: " << endl;
        cout << "1-Suma" << endl
             << "2-Resta" << endl
             << "3-Multiplicacion" << endl
             << "4-Asigancion suma" << endl
             << "6-Asignacion resta" << endl
             << "7-asignacion multiplicacion" << endl
             << "8-Asignacion Division" << endl
             << "9-Salir" << endl;
        cin >> Respuesta;
    }
    return Respuesta;
} //Fin del metodo del Menu.
