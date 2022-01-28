#include<iostream>
#include<string>
#include"ouvrier.h"
using namespace std;
ouvrier::ouvrier(int c,string n,string p,string a,int t,int ido,float f):employee(c,n,p,a,t)
{
    idouvrier=ido;
    salaire=f;
}
ouvrier::~ouvrier()
{
}
void ouvrier::saisir()
{
    cout<<"donnez l'id de l'ouvrier"<<endl;
    cin>>idouvrier;
    cout<<"donnez le salaire de l'ouvrier"<<endl;
    cin>>salaire;
    employee::saisir();

}
void ouvrier::afficher()
{
    cout<<" l'id de l'ouvrier est :"<< idouvrier<<endl;
    cout<<" le salaire de l'ouvrier est :"<< salaire<<endl;
    employee::afficher();

}
istream& operator >>(istream& in , ouvrier& o)
{

    cout<<"donnez l'id de l'ouvrier"<<endl;
    in>>o.idouvrier;
    o.saisir();
    cout<<"donnez le salaire de l'ouvrier"<<endl;
    in>>o.salaire;
    return in;
}
ostream& operator <<(ostream&out , ouvrier& o)
{
    out<<" l'id de l'ouvrier est :"<< o.idouvrier<<endl;
    out<<" le salaire de l'ouvrier est :"<< o.salaire<<endl;
    o.afficher();
    return out;

}
void ouvrier:: modiferEmployeeOuvrier()
{
    int choix;
    cout<<"modifier (1) ID ou(2) le salaire ou (3) les donnes "<<endl;
    cin>>choix;
    system("cls");
    if(choix==1)
    {
        cout<<" modifier l'ID "<<endl;
        int c;
        cout<<"le nouveau ID"<<endl;
        cin>>c;
        idouvrier=c;
    }
    if(choix==2)
    {
        cout<<" modifier le salaire "<<endl;
        int c;
        cout<<"le nouveau salaire"<<endl;
        cin>>c;
        salaire=c;
    }
    else if(choix==3)
        modiferEmployee();

}
