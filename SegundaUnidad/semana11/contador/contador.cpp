#include <iostream>
using namespace std;
#include "contador.h"

int Contador::numero = 0;

Contador& Contador::operator++()
{
    ++numero;

    return *this;
}//incremento Prosfijo

Contador Contador::operator++(int)
{
    Contador temp{ *this};
    ++(*this);
    return temp;
}

ostream& operator << ( ostream& out, const Contador& d)
{
    out << d.numero;
    return out;
}

void Contador::valor()
{   
    Contador contador(5);
    //incremento Prefijo
    ++contador;
    ++contador;
    //incremento Prosfijo

    contador++;
    contador++;

    cout << contador;

}

main()
{

    Contador::valor();
    
    return 0;
}
