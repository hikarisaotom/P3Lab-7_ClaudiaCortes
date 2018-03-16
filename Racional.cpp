#include "Racional.h"
#include <iostream>
#include <string>
using namespace std;
Racional::Racional(int numerador, int denominador)
{
    this->numerador = numerador;
    this->denominador = denominador;
}
Racional::Racional()
{
}

void Racional::simplificadornumeros()
{
    int num1 = numerador;
    int num2 = denominador;
    int cont = 0;
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
    numerador = num1;
    denominador = num2;
}

int Racional::getdenominador()
{
    return denominador;
}
int Racional::getnumerador()
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

void Racional::log()
{
}

void Racional::operator+=(Racional &) const
{
}
const Racional *Racional::operator+(const Racional &) const
{
}
void Racional::operator-=(Racional &) const
{
}
const Racional *Racional::operator-(const Racional &) const
{
}
void Racional::operator*=(Racional &) const
{
}
const Racional *Racional::operator*(const Racional &)const
{
}
void Racional::operator/=(Racional &) const
{
}
const Racional *Racional::operator/(const Racional &) const
{
}
