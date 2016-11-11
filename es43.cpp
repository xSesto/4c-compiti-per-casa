//Es 43
#include <iostream>
#include <string.h>
using namespace std;

string candidato1, candidato2;
float voti1, voti2;
float percentuale1, percentuale2;

float perc (float& voti1, float& voti2);

int main()
{
    cout<<"Inserisci il nome del primo candidato: ";
    cin>>candidato1;
    cout<<"Inserisci i voti del primo candidato: ";
    cin>>voti1;

    cout<<"Inserisci il secondo candidato: ";
    cin>>candidato2;
    cout<<"Inserisci i voti del secondo candidato: ";
    cin>>voti2;

    perc(voti1, voti2);
    percentuale1=voti1;
    percentuale2=voti2;

    if (percentuale1>percentuale2)
    {
        cout<<"1)  " <<candidato1 <<"  " <<percentuale1 <<"%"<<endl;
        cout<<"2)  " <<candidato2 <<"  " <<percentuale2 <<"%"<<endl;
    }
    else
    {
        cout<<"1)  " <<candidato2 <<"  " <<percentuale2 <<"%"<<endl;
        cout<<"2)  " <<candidato1 <<"  " <<percentuale1 <<"%"<<endl;
    }

  return 0;
}

float perc (float& voti1, float& voti2)
{
    int sommavot;
    sommavot=voti1+voti2;
    voti1=(100*voti1)/sommavot;
    voti2=(100*voti2)/sommavot;
    return voti1;
    return voti2;
}
