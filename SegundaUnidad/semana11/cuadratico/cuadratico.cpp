#include <iostream>


#include "cuadratico.h"



using namespace std;



std::ostream& operator << (std::ostream& o, const Cuadratico& R) {
    R.escribe(o);
    return o;
}

std::istream& operator >> (std::istream& i, Cuadratico& R) {
    R.lee(i);
    return i;
}




Cuadratico::Cuadratico() {
    a = 0;
    b = 0;
    c = 0;
}

Cuadratico::Cuadratico(const Cuadratico& other) {
    a = other.a;
    b = other.b;
    c = other.c;

}

Cuadratico::Cuadratico(double _a, double _b, double _c) {
    a = _a;
    b = _b;
    c = _c;  
}

Cuadratico::Cuadratico(double _x) {
    x = _x;
}
 
void Cuadratico::escribe(ostream& o) const {
    if(b<0 && x>0) {
        o << a << "(" << (x*x) << ")" << b << "(" << x << ")";
    } else if (b>0 && x<0) {
        o << a << "(" << (x*x) << ")" << '-' << b << "(" << -x << ")";
    } else {
        o << a << "(" << (x*x) << ")" << '+' << -b << "(" << -x << ")";
    } 

    if(c>0) {
        o << '+' << c;
    } else {
        o << c;
    }

}

void Cuadratico::lee(istream& i) {
    char f;
    i >> a >> f >> b >> f >> c >> f >> x;
   
}




void Cuadratico::operator=(const Cuadratico& otr)  {
    double resultado;
    resultado =  (otr.a*x*x) + (otr.b*x) +  otr.c;

    cout << "el resultado es: " << resultado;
    

}




int main(){
    Cuadratico resul;
    Cuadratico X(2);
    
    Cuadratico B(1, 2, 3);
    Cuadratico D;

    X=B;
    cout << endl;
    cin >> D ; 
    cout << D;

    cout << endl;
    D=D;

}
