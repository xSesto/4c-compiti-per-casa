#include <iostream>

using namespace std;

float prezzo, perc_sconto, prezzo_scontato;
float sconto(float prezzo, float perc_sconto, float prezzo_scontato)
{
    prezzo_scontato=prezzo-((prezzo*perc_sconto)/100);
    return prezzo_scontato;
}
int main()
{
    cout<<"inserici il prezzo iniziale: ";
    cin>>prezzo;
    cout<<"inserici lo sconto: ";
    cin>>perc_sconto;
    cout<<endl;
    cout<<"il prezzo scontato risulta:€ ";
    cout<<sconto(prezzo,  perc_sconto,  prezzo_scontato) <<endl;
    return 0;

}
