#include <iostream>
using namespace std;
int CalcularDoble (int n);
int main(){
    int n1;
    cout<<"ingrese numero"<<endl;
    cin>>n1;
    cout<<"el doble es: "<<CalcularDoble(n1)<<endl;
    return 0;
            }
int CalcularDoble (int n){

n=n*2;
return n;
}