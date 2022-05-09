#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void incertar(int a,vector<int> &vec){
    vec.push_back(a);
    sort(vec.begin(), vec.end());
}

void imprimir(vector<int> &vec){
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << "; ";
    }
    cout <<"\n------------------------------------------------\n";
}

bool areFactors(int a,vector<int> &vec){
    int cont=0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if(a%vec[i]==0){
            cont++;
        }
    }
    if(cont==vec.size()){
        return true;
    }
    else{
        return false;
    }


}


int main(){
    int n;

    vector<int> vec;
    int numero;

    cout<<"Ingrese el numero : ";
    cin>>n;

    cout<<"Ingrese los supuestos numeros factores de " <<n<<" : "<<endl;
    while(cin>> numero){
        incertar(numero,vec);
    }

    imprimir(vec);
    
    if(areFactors(n,vec)==true){
        cout<<"Todos los elemntos del vector son factores de "<<n;
    }
    else{
        cout<<"No son factores de "<<n;
    }

}
