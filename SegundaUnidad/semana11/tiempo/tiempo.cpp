#include <iostream>

#include "tiempo.h"

using namespace std;

std::ostream& operator << (std::ostream& o, const Tiempo& R) {
    R.escribe(o);
    return o;
}

std::istream& operator >> (std::istream& i, Tiempo& R) {
    R.lee(i);
    return i;
}


void Tiempo::reduce() {
    int a,b,c,d;
    
    a = segundos/60;

    b = a*60;
    
    c = minutos/60;

    d = c*60;

    segundos = segundos-b;

    minutos = (minutos+a)-d;

    horas = horas+c;

 
        
}


Tiempo::Tiempo() {
    minutos = 0;
    segundos = 0;
    horas = 0;
}

Tiempo::Tiempo(const Tiempo& other) {
    minutos = other.minutos;
    segundos = other.segundos;
    horas = other.horas;

}

Tiempo::Tiempo(int hor, int minu, int seg) {
    minutos = minu;
    segundos = seg;
    horas = hor;
    reduce();

}
 
void Tiempo::escribe(ostream& o) const {
    if ( horas > 12){
        o << horas << '/' << minutos << '/' << segundos << " PM";
    } else {
        o << horas << '/' << minutos << '/' << segundos << " AM";
    }
    
    

}

void Tiempo::lee(istream& i) {
    char c;
    i >> horas >> c >> minutos >> c >> segundos ;
    reduce();
}



void Tiempo::operator+=(const Tiempo& otr) {
    int a = minutos, b = segundos, c = horas;
    int d = otr.minutos, e= otr.segundos, f= otr.horas;
    minutos = a+d;
    segundos = b+e;
    horas = c+f;
    reduce();

}


void Tiempo::operator-=(const Tiempo& otr) {
    int a = minutos, b = segundos, c = horas;
    int d = otr.minutos, e= otr.segundos, f= otr.horas;
    minutos = a+d;
    segundos = b+e;
    horas = c+f;
    reduce();

}



Tiempo Tiempo::operator+(const Tiempo& otr) const {
    Tiempo resultado(horas ,minutos ,segundos );
    resultado += otr;
    return resultado;
}

Tiempo Tiempo::operator-(const Tiempo& otr) const {
    Tiempo resultado(horas ,minutos ,segundos );
    resultado -= otr;
    return resultado;
}


bool Tiempo::operator==(const Tiempo& otr) {
    int a = minutos, b = segundos, c = horas;
    int d = otr.minutos, e= otr.segundos, f= otr.horas;
    if(a==d && b==e && c==f){
        return true;
    }

    return false;
  
}

bool Tiempo::operator!=(const Tiempo& otr) {
    int a = minutos, b = segundos, c = horas;
    int d = otr.minutos, e= otr.segundos, f= otr.horas;
    if(a!=d || b!=e || c!=f){
        return true;
    }

    return false;
  
}

bool Tiempo::operator<(const Tiempo& otr) {
    int a = horas, b = minutos, c = segundos; 
    int d = otr.horas, e = otr.minutos, f= otr.segundos;
    if ( a<d ) {
        return true;
    } else if (a==d && b<e ) {
        return true;
    } else if (a==d && b==e && c<f ) {
        return true;
    }

    return false;
    
}

bool Tiempo::operator>(const Tiempo& otr) {
    int a = horas, b = minutos, c = segundos; 
    int d = otr.horas, e = otr.minutos, f= otr.segundos;
    if ( a>d ) {
        return true;
    } else if (a==d && b>e ) {
        return true;
    } else if (a==d && b==e && c>f ) {
        return true;
    }

    return false;
    
}

bool Tiempo::operator<=(const Tiempo& otr) {
    int a = horas, b = minutos, c = segundos; 
    int d = otr.horas, e = otr.minutos, f= otr.segundos;
    if ( a<=d ) {
        return true;
    } else if (a==d && b<=e ) {
        return true;
    } else if (a==d && b==e && c<=f ) {
        return true;
    }

    return false;
    
}

bool Tiempo::operator>=(const Tiempo& otr) {
    int a = horas, b = minutos, c = segundos; 
    int d = otr.horas, e = otr.minutos, f = otr.segundos;
    if ( a>=d ) {
        return true;
    } else if (a==d && b>=e ) {
        return true;
    } else if (a==d && b==e && c>=f ) {
        return true;
    }

    return false;
    
}




int main(){
    Tiempo A;
    Tiempo B(3, 45, 20);
    Tiempo D(9, 45, 20);

    cout << B << endl;
    cout << D << endl;

    A = B + D;
    A.reduce();

    cout << A << endl;

    cout << (B > D) <<endl;
    cout << (B >= D) <<endl;
    cout << (B < D) <<endl;
    cout << (B <= D) <<endl;
    cout << (B == D) <<endl;
    cout << (B != D) <<endl;


}
