#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <conio.h>

using namespace std;

void imprimir(vector<char> &vec){
    for (size_t i = 0; i < vec.size(); ++i) {
        if(vec[i]!=' '){
            cout << vec[i] << "; ";
        }
    }
    cout <<"\n**************************************\n";
}

void convectirMinusculaOrdenada(vector<char> &vec){
    //convertimos todas las letra en minuscula.
    for (size_t i = 0; i < vec.size(); ++i) {
            vec[i]=tolower(vec[i]);
    }
    //convertimos ordenamos de forma alfabeticamente.
    sort(vec.begin(), vec.end());
}

void anagram(vector<char> &vec1,vector<char> &vec2){
    int cont=0;
    int cont2=0, cont3=0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        if(vec1[i]==' '){
            cont2++;
        }
        if(vec2[i]==' '){
            cont3++;
        }
    }

    for (size_t i = 0; i < vec1.size(); ++i) {
        if(vec1[i+cont2]==vec2[i+cont3]){
            cont++;
        }
    }
    if(cont==(vec1.size()-cont2)){
        cout<<"Es un anagrama ";
    }
    else{
        cout<<"No es un anagrama ";

    }


}

int main(){
    string string1, string2;
    cout<<"Palabra 1: ";
    getline(cin,string1); 
    cout<<"Palabra 2: ";
    getline(cin,string2);

    vector<char> vec1(string1.begin(), string1.end());
    convectirMinusculaOrdenada(vec1);
    imprimir(vec1);

    vector<char> vec2(string2.begin(),string2.end());
    convectirMinusculaOrdenada(vec2);
    imprimir(vec2);

    anagram(vec1,vec2);

} 
