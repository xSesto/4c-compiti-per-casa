//es41
#include <iostream>
#include <string.h>
using namespace std;

int guadagno;
int somma=0;
string reparto;
int fine;
int i=0;
float med;

int assunzione_somma (int guadagno, int& somma, string reparto);

float media (int& somma, int& i, float med);

int main () {

    cout <<"MEDIA GUADAGNI DEI REPARTI" <<endl;
    cout <<assunzione_somma (guadagno,somma,reparto) <<endl;
    cout <<"La media e':  ";
    cout <<media (somma,i,med);
        return 0;
    }

int assunzione_somma (int guadagno, int& somma, string reparto) {

    do {
        cout <<"Inserisci reparto:  ";
        cin >>reparto;
        cout <<"Inserisci guadagno:  ";
        cin >>guadagno;
        somma=somma+guadagno;
        i++;
        cout <<"Altri reparti? (0=NO)   ";
        cin >>fine;
}
while (fine!=0);
    cout <<"I guadagni totali sono:  ";
    return somma;
    }

float media (int& somma, int& i, float med) {
    med=somma/i;
    return med;
    }
