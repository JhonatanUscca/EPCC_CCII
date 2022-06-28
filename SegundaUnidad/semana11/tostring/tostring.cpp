#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
using namespace std;

#include "tostring.h"

string To_String(vector < auto > & a) {

    string strinput;
    string s;
    ostringstream o;

    for (int i = 0; i < a.size(); ++i) {
        stringstream(to_string(a[i])) >> strinput;
        o << strinput << " ; ";
        s = o.str();
    }   
    return s;
}





int main(){
    

    intrinsecos i;
    double  a = 232.213;
    

    cout <<  i.To_String (a) << endl;
    
    vector <double> vec{2,2,3,4};
    int b;
    
    cout << To_String(vec) << endl;
    contenedores c;
    map<int, double> directorio;
    directorio[1] = 3321.212;
    directorio[4] = 122.12;
    directorio[5] = 123.12;

    cout << c.To_String(directorio) << endl;


}
