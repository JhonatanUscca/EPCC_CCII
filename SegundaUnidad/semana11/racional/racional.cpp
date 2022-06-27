#include <iostream>
#include <cmath>

#include "racional.h"



using namespace std;


int mcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a%b;
        a = t;
    }
}

void Racional::reduce() {
    int Mm = mcd(numera, denume);
    numera/= Mm;
    denume /= Mm;
    if((numera < 0 && denume < 0 )||(denume < 0 && numera > 0)) {
        numera = -numera;
        denume = -denume;
    } 
}


Racional::Racional() {
    numera = 0;
    denume = 1;
}

Racional::Racional(const Racional& other) {
    numera = other.numera;
    denume = other.denume;

}

Racional::Racional(int num, int den) {
    numera = num;
    denume = den;
    reduce();

}
 
void Racional::escribe(ostream& o) const {
    o << numera;
    if (denume != 1)  o << '/' << denume;

}

void Racional::lee(istream& i) {
    char c;
    i >> numera >> c >> denume;
    reduce();
}


void Racional::operator+=(const Racional& otr) {
    int a = numera, b = denume;
    int c = otr.numera, d= otr.denume;
    numera = a*d + c*b;
    denume = b*d;
    reduce();

}


void Racional::operator-=(const Racional& otr) {
    int a = numera, b = denume;
    int c = otr.numera, d= otr.denume;
    numera = a*d - c*b;
    denume = b*d;
    reduce();

}

void Racional::operator*=(const Racional& otr) {
    numera *= otr.numera;
    denume *= otr.denume;
    reduce();

}

void Racional::operator/=(const Racional& otr) {
    numera *= otr.denume;
    denume *= otr.numera;
    reduce();
}



double Racional::aprox(){
    double resultado = numera*1.0/denume*1.0;
    double s= roundf(resultado* 100) / 100;
    return s;
}



int main(){
    Racional A;
    Racional B(7);
    Racional C;
    Racional D(2);
  

    C.lee(cin);
    C += B;
    C.escribe(cout);
    cout << endl;
    C *= D;

    C.escribe(cout);
    cout << endl;

    cout << C.aprox();

    

}
