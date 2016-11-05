//Esercizio 31
#include <iostream>
#include <string.h>

using namespace std;
string frase;
void stampa (string frase)
{
    cout<<"1:   " <<frase <<endl <<endl;
    cout<<"2:   " <<frase <<endl <<endl;
    cout<<"3:   " <<frase <<endl <<endl;
}
int main ()
{
    cout<<"Inserisci Frase/Parola: ";
    cin>>frase;
    cout<<endl;
    stampa (frase);
    return 0;
}



