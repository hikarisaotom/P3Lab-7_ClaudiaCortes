#include "Racional.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
Racional::Racional(int numerador, int denominador)
{
    this->numerador = numerador;
    this->denominador = denominador;
    simplificadornumeros();
}
Racional::Racional()
{
}

void Racional::simplificadornumeros()
{
    int num1 = this->numerador;
    int num2 = this->denominador;
    int cont = 2;
    while (cont <= num1 && cont <= num2)
    {
        if (num1 % cont == 0 && num2 % cont == 0)
        {
            num1 = num1 / cont;
            num2 = num2 / cont;
        }
        else
        {
            cont++;
        }
    }
    this->numerador = num1;
    this->denominador = num2;
}

int Racional::getdenominador() const
{
    return denominador;
}
int Racional::getnumerador() const
{
    return numerador;
}
void Racional::setnumerador(int numerador)
{
    this->numerador = numerador;
}
void Racional::setdenominador(int denominador)
{

    this->denominador = denominador;
}

void Racional::log(string linea)
{

    ofstream salida("Respuestas.txt", ios::app);
    salida << linea << endl;
}

void Racional::operator+=(Racional &NUM)
{
    int numerador1 = this->getnumerador() * NUM.getdenominador();
    int numerador2 = this->getdenominador() * NUM.getnumerador();
    int denominador1 = this->getdenominador() * NUM.getdenominador();
    int total = numerador1 + numerador2;
    this->denominador = denominador1;
    this->numerador = total;
    simplificadornumeros();
}
const Racional *Racional::operator+(const Racional &NUM) const
{
    int numerador1 = this->getnumerador() * NUM.getdenominador();
    int numerador2 = this->getdenominador() * NUM.getnumerador();
    int denominador1 = this->getdenominador() * NUM.getdenominador();
    int total = numerador1 + numerador2;
    return new Racional(total, denominador1);
}
void Racional::operator-=(Racional &NUM)
{
    int numerador1 = this->getnumerador() * NUM.getdenominador();
    int numerador2 = this->getdenominador() * NUM.getnumerador();
    int denominador1 = this->getdenominador() * NUM.getdenominador();
    int total = numerador1 - numerador2;
    this->denominador = denominador1;
    this->numerador = total;
    simplificadornumeros();
}
const Racional *Racional::operator-(const Racional &NUM) const
{
    int numerador1 = this->getnumerador() * NUM.getdenominador();
    int numerador2 = this->getdenominador() * NUM.getnumerador();
    int denominador1 = this->getdenominador() * NUM.getdenominador();
    int total = numerador1 - numerador2;
    return new Racional(total, denominador1);
}
void Racional::operator*=(Racional &NUM)
{
    int numeroador1 = this->numerador * NUM.numerador;
    int denominador1 = this->denominador * NUM.getdenominador();
    this->denominador = denominador1;
    this->numerador = numeroador1;
    simplificadornumeros();
}
const Racional *Racional::operator*(const Racional &NUM) const
{
    int numeroador1 = numerador * NUM.numerador;
    int denominador1 = denominador * NUM.getdenominador();
    return new Racional(numeroador1, denominador1);
}
void Racional::operator/=(Racional &NUM)
{
    int numeroador1 = numerador * NUM.denominador;
    int denominador1 = denominador * NUM.getnumerador();
    this->denominador = denominador1;
    this->numerador = numeroador1;
    simplificadornumeros();
}
const Racional *Racional::operator/(const Racional &NUM) const
{
    int numeroador1 = numerador * NUM.denominador;
    int denominador1 = denominador * NUM.getnumerador();
    return new Racional(numeroador1, denominador1);
}

ostream &operator<<(ostream &out, const Racional &NUM)
{
    out << NUM.getnumerador() << "/ " << NUM.getdenominador() << endl;
    return out;
}
