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

void Racional:: log(){

}


void Racional::operator+=(Racional &)
{
}
const Racional *Racional::operator+(const Racional &) const
{
}
void Racional::operator-=(Racional &)
{
}
const Racional *Racional::operator-(const Racional &) const
{
}
void Racional::operator*=(Racional &)
{
}
const Racional *Racional::operator*(const Racional &)const
{
}
void Racional::operator/=(Racional &)
{
}
const Racional *Racional::operator/(const Racional &) const
{

}
