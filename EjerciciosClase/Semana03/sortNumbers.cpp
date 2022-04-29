#include <iostream>
using namespace std;
int main(){
    int n,cont=0,aux;
    cout<<"Numeros ? ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"Numero? ";
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";     
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0,k=1;k<n;j++,k++){
                if(A[j]>A[k]){
                    aux=A[k];
                    A[k]=A[j];
                    A[j]=aux;
                }
        }         
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" "; 
    }
}