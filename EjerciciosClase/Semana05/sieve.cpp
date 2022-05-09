#include <iostream>
#include <algorithm>
using namespace std;


void sieve(int n){
    bool primos[n+1];
    fill_n(primos,n+1,true);
    primos[0] =false;  //caso excepcional.
    primos[1] =false; //caso excepcional.
    for(int i=2; i<=n; i++){
        int j=2;
        while(i*j<=n){
            primos[i*j] = false;
            j++;
        }
    }
    
    cout<<"\n";
    cout<<"lista de numeros de 0 a "<<n<<"\n";
    cout<<"1 = true "<<"\n";
    cout<<"0 = false "<<"\n";
    cout<<"\n";


    for(int i=0;i<=n;i++){
        cout<<"\t"<<i<<" -> "<<primos[i]<<endl;

    }

}

int main(){
    int n;
    cout<<"Ingrese el rango de numero desee visualizar en lista (esta lista comienza des el 0) \n";
    cout<<"numero : ";
    cin>>n;

    sieve(n-1);
    return 0;

}
