#include <iostream>
using namespace std;
float numeri[10];
float somma;
int i;
int main(){
    somma=0;
    for(i=0;i<10;i++){
        cout<<"inserisci il numero: "<<i+1<<"    ";
        cin>>numeri[i];
        somma=somma+numeri[i];
    };
    
    cout<<"la somma dei 10 numeri"<<"    "<<somma;
    return 0;
}
