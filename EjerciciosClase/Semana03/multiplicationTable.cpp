#include <iostream>
using namespace std;
int main(){
    int A[100][100];
    for(int i=0;i!=12;i++){
        for(int j=0;j!=12;j++){
            if(i==0&&(j==0)){
                cout<<"   *";
            } 
            if(j==1){
                if(i==1){
                    cout<<"+";
                }
                else{
                    cout<<"|";
                }
            }
            if(i==1){
                cout<<"----";
            }
            if(j==0&&i>1){
                if(i<=10){
                    cout<<"   "<<i-1;
                }
                else{
                    cout<<"  "<<i-1;
                }
            }
            if(i==0&&j>1){
                if(j<=10){
                    cout<<"   "<<j-1;
                }
                else{ 
                    cout<<"  "<<j-1;
                }
            }
            if(j>1&&i>1){
                    A[i][j]=(i-1)*(j-1);
                    if(A[i][j]<10){
                        cout<<"   "<<A[i][j];
                    }
                    if(A[i][j]>=10&&A[i][j]<100){
                        cout<<"  "<<A[i][j];
                    }
                    if(A[i][j]>=100){
                        cout<<" "<<A[i][j];
                    }
            }   
        }
        cout<<"\n";
    }
    return 0;
}