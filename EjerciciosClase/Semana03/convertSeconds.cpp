#include <iostream>
using namespace std;

int main(){
    int num,min,seg,hor,var;
    cout<<"Enter the number of seconds to convect: "<<endl;
    cin>>num;
    var=num/60; //convertir todos los segundos a minutos en total.
    seg=num-(var*60); //cuantos segundos quedan.
    hor=var/60; //cantidad de horas.
    min=var-(hor*60); //cuantos minutos quedan.

    cout<<num<<" seconds = "<<hor<<" hours, "<<min<<" minutes, and "<<seg<<" seconds.";
}