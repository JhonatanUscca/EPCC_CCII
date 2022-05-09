#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    map<string, int> counts{};
    string word{};
    while(cin>>word){
        if(word=="0"){
            break;
        }
        else{
        ++counts[word];
        }
    }
    map<string,int>::iterator iter;
    for(iter=counts.begin();iter != counts.end();iter++){
        cout<<"clave ="<<iter->first<<":valor="<<iter->second<<endl;
    }
    system("PAUSE");
    return 0;
}
