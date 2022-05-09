#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

#include <map>

using namespace std;

void lettlerHist(vector<char> &vec,map<char, int> &counts){
    for (size_t i = 0; i < vec.size(); ++i) {
        ++counts[tolower(vec[i])];
    }
    sort(vec.begin(), vec.end());

}


int main(){
    string string1;
    map<char, int> counts{};
    cout<<"Palabra 1: ";
    getline(cin,string1);
    vector<char> vec1(string1.begin(), string1.end());

    lettlerHist(vec1,counts);

    //imprimir el histograma.

    map<char,int>::iterator iter;

    for(iter=counts.begin();iter != counts.end();iter++){
        cout<<iter->first<<" : ";
        for(int i=0;i<iter->second;i++){
            cout<<"* ";          
        }
        cout<<"\n";
    }
} 
