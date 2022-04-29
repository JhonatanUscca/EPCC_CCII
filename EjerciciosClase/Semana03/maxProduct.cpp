#include <iostream>
using namespace std;
int main(){
    int n,max1=0,max2=0;
    cout<<"Numero? ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"Numero "<<i+1<<"? ";
        cin>>A[i];
        if(A[i]>max1){
            max1=A[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
        if(A[i]!=max1){
            if(A[i]>max2){
                max2=A[i];
            }
        }
    }
    cout<<endl;
    cout<<"Resultado: "<<max1*max2; 
}