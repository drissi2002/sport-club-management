#include"joueur.h"
#include<iostream>
#include"date.h"
using namespace std ;
joueur::joueur(int c,string n,string p,string a,int t,float s)
{
    date d;
    CIN=c;
    nom =n;
    prenom=p;
    dateN=d;
    adresse=a;
    tel=t;
    salaire=s;

}

joueur::~joueur()
{}
void joueur::saisirj()
{
    cout<<"donnez la CIN"<<endl;
    cin>>CIN;
    cout<<"donnez le nom"<<endl;
    cin>>nom;
    cout<<"donnez le prenom"<<endl;
    cin>>prenom;
    cout<<"donnez la date de naissance"<<endl;
    dateN.saisir();
    cout<<"donnez l'adresse"<<endl;
    cin>>adresse;
    cout<<"donnez le telephone"<<endl;
    cin>>tel;
    cout<<"le salaire du joueur "<<endl;
    cin>>salaire;
}
float joueur::getSalaire()
{
    return salaire;
}
void joueur::affichej()
{
    cout<<">>la CIN :"<<CIN<<endl;
    cout<<">>le nom :"<<nom<<endl;
    cout<<">>le prenom :"<<prenom<<endl;
    cout<<">>la date de naissance :"<< endl;
    dateN.afficher();
    cout<<">>l'adresse :"<<adresse<<endl;
    cout<<">>le telephone :"<<tel<<endl;
    cout<<">>le salaire  :"<<salaire<<" DT"<<endl;
}
 istream& operator >>(istream&in , joueur&j)
 {
    cout<<"donnez la CIN"<<endl;
    in>>j.CIN;
    cout<<"donnez le nom"<<endl;
    in>>j.nom;
    cout<<"donnez le prenom"<<endl;
    in>>j.prenom;
    cout<<"donnez la date de naissance"<<endl;
    in>>j.dateN;
    cout<<"donnez l'adresse"<<endl;
    in>>j.adresse;
    cout<<"donnez le telephone"<<endl;
    in>>j.tel;
    cout<<"le salaire du joueur "<<endl;
    in>>j.salaire;
    return in ;

 }
 ostream& operator <<(ostream&out , joueur&j)
 {
    out<<">>la CIN :"<<j.CIN<<endl;
    out<<">>le nom :"<<j.nom<<endl;
    out<<">>le prenom :"<<j.prenom<<endl;
    out<<">>la date de naissance :"<< j.dateN <<endl;

    out<<">>l'adresse :"<<j.adresse<<endl;
    out<<">>le telephone :"<<j.tel<<endl;
    out<<">>le salaire  :"<<j.salaire<<" DT"<<endl;

 }

void joueur::modiferjoueur()
{
    int choix;
    cout<<" modification :  1) modifier la CIN "<<endl;
    cout<<"                 2) modifier nom "<<endl;
    cout<<"                 3) modifier prenom "<<endl;
    cout<<"                 4) modifier dateN "<<endl;
    cout<<"                 5) modifier adresse "<<endl;
    cout<<"                 6) modifier salaire "<<endl;
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
            date d;
            cout<<"la nouvelle date"<<endl;
            d.saisir();
            dateN=d;
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
            cout<<"le nouveau salaire est "<<endl;
            cin>>c;
            salaire=c;
        }
}
