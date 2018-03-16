#include <fstream>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include "Racional.h"

int menu();
int posicones();
vector<int> numeros();
vector<Racional *> Fraciones;
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
            int num1 = posicones();
            int num2 = posicones();
            Racional *R1 = Fraciones[num1];
            Racional *R2 = Fraciones[num2];
            const Racional *R3 = (*R1) + (*R2);
            cout << *R1 << " + " << *R2 << " = " << *R3 << endl;
            break;
        } //Fin del case 1.
        case 2:
        { //
            cout << "Usted selecciono: Resta" << endl;
            int num1 = posicones();
            int num2 = posicones();
            Racional *R1 = Fraciones[num1];
            Racional *R2 = Fraciones[num2];
            const Racional *R3 = (*R1) - (*R2);
            cout << *R1 << " - " << *R2 << " = " << *R3 << endl;
            break;
        } //Fin del case 2

        case 3:
        { //
            cout << "Usted selecciono: MUltiplicacion" << endl;
            vector<int> num = numeros();
            Racional *R1 = new Racional(num[0], num[1]);
            Racional *R2 = new Racional(num[2], num[3]);
            const Racional *R3 = (*R1) * (*R2);
            cout << *R1 << " * " << *R2 << " = " << *R3 << endl;
            break;
        } //Fin del case 3

        case 4:
        { //
            cout << "Usted selecciono: Division" << endl;
            int num1 = posicones();
            int num2 = posicones();
            Racional *R1 = Fraciones[num1];
            Racional *R2 = Fraciones[num2];
            const Racional *R3 = (*R1) / (*R2);

            cout << *R1 << " / " << *R2 << " = " << *R3 << endl;

            break;
        } //Fin del case 4.
        case 5:
        { //
            cout << "Usted selecciono: +=" << endl;
            int num1 = posicones();
            int num2 = posicones();
            Racional *R1 = Fraciones[num1];
            Racional *R2 = Fraciones[num2];
            *R1 += (*R2);
            cout << *R1 << " += " << *R2 << " = " << *R1 << endl;
            break;
        } //Fin del case 5.
        case 6:
        { //
            cout << "Usted selecciono: -=" << endl;
            cout << "Usted selecciono: +=" << endl;
            int num1 = posicones();
            int num2 = posicones();
            Racional *R1 = Fraciones[num1];
            Racional *R2 = Fraciones[num2];
            *R1 -= (*R2);

            cout << *R1 << " -= " << *R2 << " = " << *R1 << endl;
            break;
        } //Fin del case 6.
        case 7:
        { //
            cout << "Usted selecciono: *=" << endl;

            int num1 = posicones();
            int num2 = posicones();
            Racional *R1 = Fraciones[num1];
            Racional *R2 = Fraciones[num2];

            cout << *R1 << " *= " << *R2 << " = " << *R1 << endl;
            break;
        } //Fin del case 7.
        case 8:
        { //
            cout << "Usted selecciono: /=" << endl;
            int num1 = posicones();
            int num2 = posicones();
            Racional *R1 = Fraciones[num1];
            Racional *R2 = Fraciones[num2];
            *R1 /= (*R2);
            cout << *R1 << " /= " << *R2 << " = " << *R1 << endl;
            break;
        } //Fin del case 8.
        case 9:
        { //
            cout << "Crear:" << endl;
            vector<int> num = numeros();
            Racional *Temp = new Racional(num[0], num[1]);
            Fraciones.push_back(Temp);
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
vector<int> numeros()
{
    int num1;
    int num2;
    int dem1;
    int dem2;
    vector<int> retval;
    cout << "Ingrese el primer numerador" << endl;
    cin >> num1;

    cout << "Ingrese el primer denominador" << endl;
    cin >> dem1;
    /*

    cout << "Ingrese el segundo numerador" << endl;
    cin >> num2;

    cout << "Ingrese el segundo  denominador" << endl;
    cin >> dem2;*/
    retval.push_back(num1);
    retval.push_back(dem1);
    /*retval.push_back(num2);
    retval.push_back(dem2);*/

    return retval;
}

int posicones()
{
    int pos = -150;
    while (pos < 0 || pos > Fraciones.size() - 1)
    {
        for (int i = 0; i < Fraciones.size(); i++)
        {
            cout << i << " - " << *Fraciones[i] << endl;
        }
        cout << " Seleccione la fraccion que desea sumar " << endl;
        cin >> pos;
    }

    return pos;
}
//Menu principal del programa
int menu()
{
    int Respuesta = -100;
    while (Respuesta <= 0 || Respuesta > 10)
    {
        cout << "Bienvenido al laboratorio # 7" << endl
             << "Seleccione la opcion que desea: " << endl;
        cout << "1-Suma" << endl
             << "2-Resta" << endl
             << "3-Multiplicacion" << endl
             << "4-Division" << endl
             << "5-Asigancion suma" << endl
             << "6-Asignacion resta" << endl
             << "7-asignacion multiplicacion" << endl
             << "8-Asignacion Division" << endl
             << "9-Crear" << endl
             << "10-Salir" << endl;
        cin >> Respuesta;
    }
    return Respuesta;
} //Fin del metodo del Menu.
