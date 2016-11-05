//Esercizio 34
#include <iostream>

using namespace std;

int n;
void succesivo (int n)
{
	int p;
	p=n+5;
	do
	{
        n++;
		cout<<"   "<<n;
    } while (n!=p);
}
int main ()
{
	cout<<"Inserisci il Numero: ";
	cin>>n;
    cout<<"I 5 numeri successivi sono:";
    succesivo (n);
    return 0;
}






