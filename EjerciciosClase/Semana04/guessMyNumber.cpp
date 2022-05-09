#include <cmath>
#include <random>
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    int MIN = 1;
    int MAX = 100;
    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution<int> distr(MIN, MAX);
    num1=distr(eng);
    cout<<"I'm thinking of a numbers between 1 and 100 (including both),\n";
    cout<<"Can you guess what it is? \n";
    cout<<"Type a number: ";
    cin>>num2;
    cout<<"Your guess is: "<<num2<<"\n";
    cout<<"The number I was thinking od is "<<num1<<"\n";
    cout<<"You were off by :"<<fabs(num2-num1);
}
