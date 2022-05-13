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

string PalabraMasGrande(vector<string> &vec){
    int aux=cantidadCaracteres(vec[1]);
    int j=0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if(cantidadCaracteres(vec[i])>aux){
            aux=cantidadCaracteres(vec[i]);
            j=i;
        }
    }
    return vec[j];

}

string limpiar(string a){
    vector<char> vec = {'a', 'e', 'i', 'o', 'u',
    'A', 'E', 'I', 'O', 'U'};
     
    for (int i = 0; i < a.length(); i++){
        if (find(vec.begin(), vec.end(),a[i]) != vec.end()){
            a = a.replace(i, 1, "");
            i -= 1;
        }
    }

    return a;
}

int main()
{


    string string1,string2;
    vector<string> palabra;
    string str;

    cout<<"Escribe palbras, para terminar incertar 0 :";
    while(cin>>str){
        if(str=="0"){
            break;
        }
        else{
            palabra.push_back(str);
        }
    }

    cout<<"La palabra mas grande es: "<<PalabraMasGrande(palabra)<<endl;
    cout<<"palabras limpiadas son : "<<endl;
    for (size_t i = 0; i < palabra.size(); ++i){
        cout<<"Palabra "<<i+1<<" es : "<<limpiar(palabra[i])<<endl;
    }
    return 0;
}
