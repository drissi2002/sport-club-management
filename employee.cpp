#include"employee.h"
#include<iostream>
#include"date.h"
using namespace std ;
employee::employee(int c,string n,string p,string a,int t,float s)
{
    date d;
    CIN=c;
    nom=n;
    prenom=p;
    dateNaiss=d;
    adresse=a;
    tel=t;
    salaire=s;
}
employee::~employee()
{
}
float employee::getsalaire()
{
    return salaire;
}
void employee::saisir()
{
    cout<<"donnez la CIN"<<endl;
    cin>>CIN;
    cout<<"donnez le nom"<<endl;
    cin>>nom;
    cout<<"donnez le prenom"<<endl;
    cin>>prenom;
    cout<<"donnez la date de naissance"<<endl;
    dateNaiss.saisir();
    cout<<"donnez l'adresse"<<endl;
    cin>>adresse;
    cout<<"donnez le telephone"<<endl;
    cin>>tel;
    cout<<"donnez la salaire"<<endl;
    cin>>salaire;

}
void employee::afficher()
{
    cout<<"la CIN :"<<CIN<<endl;
    cout<<"le nom :"<<nom<<endl;
    cout<<"le prenom :"<<prenom<<endl;
    cout<<"la date de naissance :"<< endl;
    dateNaiss.afficher();
    cout<<"l'adresse :"<<adresse<<endl;
    cout<<"le telephone :"<<tel<<endl;
     cout<<"la salaire : " <<salaire<<endl;

}
istream& operator >>(istream&in , employee&em)
{
    cout<<"donnez la CIN"<<endl;
    in>>em.CIN;
    cout<<"donnez le nom"<<endl;
    in>>em.nom;
    cout<<"donnez le prenom"<<endl;
    in>>em.prenom;
    cout<<"donnez la date de naissance"<<endl;
    in>>em.dateNaiss ;
    cout<<"donnez l'adresse"<<endl;
    in>>em.adresse;
    cout<<"donnez le telephone"<<endl;
    in>>em.tel;
     cout<<"donnez la salaire"<<endl;
    in>>em.salaire;
    return in;

}
ostream& operator <<(ostream&out ,employee&em)
{
    out<<"la CIN :"<<em.CIN<<endl;
    out<<"le nom :"<<em.nom<<endl;
    out<<"le prenom :"<<em.prenom<<endl;
    out<<"la date de naissance :"<< endl;
    out<<em.dateNaiss;
    out<<"l'adresse :"<<em.adresse<<endl;
    out<<"le telephone :"<<em.tel<<endl;
    out<<"la salaire :"<<em.salaire<<endl;
    return out ;

}

void employee:: modiferEmployee()
{
int choix;
    cout<<" modification :  1) modifier la CIN "<<endl;
    cout<<"                 2) modifier nom "<<endl;
    cout<<"                 3) modifier prenom "<<endl;
    cout<<"                 4) modifier dateN "<<endl;
    cout<<"                 5) modifier adresse "<<endl;
    cout<<"                 6) modifier tel "<<endl;
    cout<<"                 7) modifier salaire "<<endl;
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
            dateNaiss=d;
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
            cout<<"le nouveau numero de telphone "<<endl;
            cin>>c;
            tel=c;
        }
        else if (choix==7)
        {
           float nn;
            cout<<" le nouveau salaire"<<endl;
            cin>>nn;
            salaire=nn;
        }

}
