#include<iostream>

using namespace std;

void convertBinary(int n){
    if(n>1){   
        convertBinary(n/2);
    }
    cout<<n%2;
}

int main(){
    int num{};
    cin>>num;
    convertBinary(num);

    return 0;
}
