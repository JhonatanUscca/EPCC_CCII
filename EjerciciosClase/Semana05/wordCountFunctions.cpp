#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int cantidadCaracteres(string a){
    int total;
    total=a.size();
    return total;
}

void PalabraMasGrande(string a,string b){
    cout<<"\n ";
    if(cantidadCaracteres(a)>cantidadCaracteres(b)){
        cout<<a<<" es la palbra mas grande ";
    }
    else{
        cout<<b<<" es la palbra mas grande ";
    }
 
}

void limpiar(string a){
    vector<char> vec(a.begin(),a.end());
    for (size_t i = 0; i < vec.size(); ++i) {
        vec[i]=tolower(vec[i]);
        for(char j='a'; j<'z'; j++){
            if(vec[i]==j){
                cout<<vec[i];
            }
        }
    } 
    cout<<"\n";
}


int main()
{
    string string1,string2;
    cout<<"la palabra 1 es: ";
    getline(cin,string1);
    cout<<"la palabra 2 es: ";
    getline(cin,string2);
    cout << "cadena 1:" << string1;
    cout << "\n";
    cout << "cadena 2:" << string2;
    cout << "\n";

    PalabraMasGrande(string1,string2);
    cout<<endl;

    cout<<"palabras limpiadas "<<endl;

    limpiar(string1);
    limpiar(string2);

    return 0;
}
