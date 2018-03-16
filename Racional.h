using namespace std;
#ifndef RACIONAL_H
#define RACIONAL_H

#include <string>
class Racional{
	private:
    int numerador;
    int denominador;
	public:
     int getdenominador() const;
     int getnumerador() const;
     void setnumerador(int);
     void setdenominador(int);
     Racional();
      Racional(int,int);
    void log();
    void simplificadornumeros();

    friend ostream &operator<<(ostream &, const Racional &);
    void operator+=(Racional &);
    const Racional *operator+(const Racional &) const;
    void operator-=(Racional &);
    const Racional *operator-(const Racional &) const;
    void operator*=(Racional &);
    const Racional *operator*(const Racional &)const;
    void operator/=(Racional &);
    const Racional *operator/(const Racional &) const;
};
#endif
