//Es 42
#include <iostream>
#include <string.h>
using namespace std;

string end1;
int prezzo;
float incr;
int fine;
int perc;
string prodotto;

float incremento (int perc, int prezzo, float incr);

int main () {
    cout <<"LISTA PRODOTTI" <<endl <<endl;
    do {
        cout <<"Il prodotto:  ";
        cin >>prodotto;                                      //Manca descrizione, probabilmente
        cout <<"Costo precedente:  ";                        //viene presa da tastiera
        cin >>prezzo;
        cout <<endl;
        cout <<incremento (perc,prezzo,incr) <<endl;
        cout <<"ti interessa altro? (0=no)" <<endl;
        cin >>fine;
        return 0;
    }
    while (fine!=0);
}
float incremento (int perc, int prezzo, float incr){
    cout <<"Ha subito una variazione perentuale del:  ";
    cin >>perc;
    cout<<"Prezzo finale: ";
    incr=prezzo+((prezzo*perc)/100);
    cout<<incr<<endl;
    return 0;
    }
