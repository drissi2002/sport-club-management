#include"fournisseur.h"
#include<iostream>
using namespace std;
fournisseur::fournisseur(int idx,int c,string n,string p,string a,int t )
{
    id=idx;
    CIN=c;
    nom=n ;
    prenom=p;
    adresse=a;
    tel=t;

}
fournisseur::~fournisseur()
{

}
void fournisseur::saisir()
{
    cout<<" donnez l'ID du fournisseur "<<endl;
    cin>>id;
    cout<<"donnez la CIN"<<endl;
    cin>>CIN;
    cout<<"donnez le nom"<<endl;
    cin>>nom;
    cout<<"donnez le prenom"<<endl;
    cin>>prenom;
    cout<<"donnez l'adresse"<<endl;
    cin>>adresse;
    cout<<"donnez le telephone"<<endl;
    cin>>tel;
}
void fournisseur::afficher()
{
    cout<<"l'ID du fournisseur :"<<id<<endl;
    cout<<"la CIN :"<<CIN<<endl;
    cout<<"le nom :"<<nom<<endl;
    cout<<"le prenom :"<<prenom<<endl;
    cout<<"l'adresse :"<<adresse<<endl;
    cout<<"le telephone :"<<tel<<endl;

}
istream& operator >>(istream&in , fournisseur&f)
{
    cout<<" donnez l'ID du fournisseur"<<endl;
    in>>f.id;
    cout<<"donnez la CIN"<<endl;
    in>>f.CIN;
    cout<<"donnez le nom"<<endl;
    in>>f.nom;
    cout<<"donnez le prenom"<<endl;
    in>>f.prenom;
    cout<<"donnez l'adresse"<<endl;
    in>>f.adresse;
    cout<<"donnez le telephone"<<endl;
    in>>f.tel;
    return in ;
}
ostream& operator <<(ostream&out ,fournisseur&f)
{
    out<<"l'ID du fournisseur :"<<f.id<<endl;
    out<<"la CIN :"<<f.CIN<<endl;
    out<<"le nom :"<<f.nom<<endl;
    out<<"le prenom :"<<f.prenom<<endl;
    out<<"l'adresse :"<<f.adresse<<endl;
    out<<"le telephone :"<<f.tel<<endl;
    return out ;
}
void fournisseur::modifier()
{

    int choix;
    cout<<" modification :  1) modifier la CIN "<<endl;
    cout<<"                 2) modifier nom "<<endl;
    cout<<"                 3) modifier prenom "<<endl;
    cout<<"                 4) modifier ID "<<endl;
    cout<<"                 5) modifier adresse "<<endl;
    cout<<"                 6) modifier tel "<<endl;
    cin>>choix;
    system("cls");
    if(choix==1)
        {
            int c;
            cout<<"le nouveau numero de la CIN"<<endl;
            cin>>c;
            CIN=c;
        }
    else if (choix==2)
        {
            string n;
            cout<<" le nouveau nom"<<endl;
            cin>>n;
            nom=n;
        }
    else if (choix==3)
        {
            string P;
            cout<<"le nouveau prenom"<<endl;
            cin>>P;
            prenom=P;
        }
    else if (choix==4)
        {
           int xd;
            cout<<"la nouvelle ID"<<endl;
            cin>>xd;
            id=xd;

        }
    else if (choix==5)
        {
            string a;
            cout<<"la nouvelle adresse "<<endl;
            cin>>a;
            adresse=a;
        }
    else if (choix==6)
        {
            int c;
            cout<<"le nouveau Tel "<<endl;
            cin>>c;
            tel=c;
        }
}


