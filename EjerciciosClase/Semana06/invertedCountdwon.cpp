#include<iostream>
using namespace std;

int invertedCountdwon(int n){
    if(n==0){
        cout<<"Blastoff!\n";          
    }
    else{
        invertedCountdwon(n - 1);
    }
    if(n>0){
        cout<<n<<"\n";
    }
}

int main(){
    int num{};
    cin>>num;
    invertedCountdwon(num);
    return 0;
}
