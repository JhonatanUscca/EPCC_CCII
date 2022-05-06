#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    int n,num;
    cout<<"Numero de elemetos? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Numero "<<i+1<<" : ";
        cin>>num;
        vec.push_back(num);
    }

    cout<<endl;
    sort(vec.begin(), vec.end());
    cout<<"Resultao: "<<vec[n-1]*vec[n-2];

} 
