#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Primo(int numero) {
    if (numero==0 || numero==1 || numero==4){
        return false;
    }
    for (int i=2;i<numero/2;i++){
        if (numero %i==0){
        return false;
        }
    }
    return true;
}


void incertar(int a,vector<int> &vec){
    vec.push_back(a);
    sort(vec.begin(), vec.end());
}


void imprimir(vector<int> &vec){
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << "; ";
    }
    cout <<"\n**************************************\n";
}


int multiplicacion(vector<int> &vec){
    int multi=1;
    for (size_t i = 0; i < vec.size(); ++i) {
            multi=multi*vec[i];
    }
    return multi;
}


void sonPrimosVector(vector<int> &vec){
    int cont=0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if(Primo(vec[i])==true){
            cont++;
        }  
    }
    if(cont==vec.size()){
        cout<<"Son primos, y la multiplicacion de todos sus elemetos es : "<<multiplicacion(vec);
    }
    else{
        cout<<"No son primos  ";
    }
}



int main(){
    vector<int> vec;
    int numero;

    cout<<"Ingrese los numeros : "<<endl;
    while(cin>> numero){
        incertar(numero,vec);
    }

    while(numero != 0);
    imprimir(vec);
    sonPrimosVector(vec);

    return 0;
}
