#include <iostream>
using namespace std;

float m,q,x,y;
bool inters;

bool intersezione (float m, float q, float x, float y,bool intersezione)
{ int y1,y2;
    y1=y;
    cout<<"y1= "<<y1<<endl;
    y2=(m*x)+q;
    cout<<"y2= "<<y2<<endl;
    if(y1==y2)
        return inters=true;
    else
        return inters=false;
}
int main()
{
    cout<<"inserisci il coefficiente angolare m: ";
    cin>>m;
    cout<<"inserisci il termine noto q: ";
    cin>>q;
    cout<<"inserisci ascissa del punto p: ";
    cin>>x;
    cout<<"inserisci ordinate del punto p: ";
    cin>>y;

    cout<<"Retta: "<<"Y="<<m<<"x+"<<q<<endl;
    cout<<"Punto: P("<<x <<";" <<y<<")"<<endl;

    if(intersezione(m,q,x,y,inters)==true)
        cout<<"Il punto appartiene alla retta"<<endl;
    else
        cout<<"Il punto non appartiene alla retta"<<endl;
}







