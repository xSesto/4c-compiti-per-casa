#include <iostream>
using namespace std;
#define N_SCUOLE 5
#define N_STUDENTI 10
class Scuola{
    public:
        unsigned int id;
        string denominazione;
        unsigned int num_studenti;
        Studente studenti[N_STUDENTI]
    public:
        Scuola(string nome_scuola);
        Scuola(string nome_scuola, unsigned int id);
};
 class studente{
    public:
        string nome;
        string cognome;
        unsigned int id_scuola;
     public:
 };

 int main(){
    Scuola scuole[N_SCUOLE];

     for(int i=0; i<N_SCUOLE; i++){
        string nome_scuola;
        cout<<"Inserisci il nome della scuola: "<<endl;
        cin>>nome_scuola;
        Scuola s(nome_scuola);
        s.id=i;
        scuole[i]=s;
        char scelta = 's';
        while(scelta=='s'){
        string nome_studente
        cout<<"Inserisci il nome dello studente: "<<endl;
        cin>>nome_studente;
        string cognome_studente;
        cout<<"Inserisci il cognome dello studente: "<<endl;
        cin>>cognome_studente;
        stud.nome=nome_studente;
        stud.cognome=cognome_studente;
        stud.id_scuola=i;
        cout<<"Vuoi continuare? (s/n): "<<endl;
        cin>>scelta;


        }
    }
    string nome_scuola;
    cout<<"Di quale scuola vuoi l'elenco studenti?"<<endl;
    cin>>nome_scuola;


return 0;
}

 Scuola::Scuola(string nome_scuola){
    denominazione=nome_scuola;
}

Scuola::Scuola(string nome_scuola, unsigned int id_scuola){
    denominazione=nome_scuola;
    id=id_scuola;
}

