#include"abonnement.h"
#include<iostream>
using namespace std;
abonnement::abonnement(int na,string n,float t)
{
    numAb=na;
    duree=n;
    tarif=t;

}
abonnement::~abonnement()
{
}
void abonnement::saisirAb()
{
    int d;
    cout<<"donnez numero d'abonnement"<<endl;
    cin>>numAb;
    cout<<"choisissez la duree d'abonnement volue :"<<endl;
    cout<<"                   1)mensuelle"<<endl;
    cout<<"                   2)semestrielle"<<endl;
    cout<<"                   3)annuelle"<<endl;
    cout<<"                   4)par jour "<<endl;
    cin>>d;
    if(d==1)
        {
            duree="1 mois";
            tarif=60;
        }
    if(d==2)
        {
            duree="3 mois";
            tarif=180;
        }

    if(d==3)
        {
            duree="1 annee";
            tarif=300;
        }
    if(d==4)
        {
            int nj ;
            cout<<"--> donnez le nombre du jour a entrainer "<<endl;
            cin>>nj;
            duree=" par jour";
            tarif=nj*5;
        }
}
void abonnement::afficherAb()
{
    cout<<">> le numero d'abonnement :"<<numAb<<endl;
    cout<<">> la duree d'abonnement :"<<duree<<endl;
    cout<<">> vous allez payer au totale:"<<tarif<<" DT"<<endl;

}
istream& operator >>(istream& in , abonnement&ab)
{
    int d;
    cout<<"donnez numero d'abonnement"<<endl;
    in>>ab.numAb;
    cout<<"choisissez la duree d'abonnement volue :"<<endl;
    cout<<"                   1)mensuelle"<<endl;
    cout<<"                   2)semestrielle"<<endl;
    cout<<"                   3)annuelle"<<endl;
    cout<<"                   4)par jour "<<endl;
    in>>d;
    if(d==1)
        {
            ab.duree="1 mois";
            ab.tarif=60;
        }
    if(d==2)
        {
            ab.duree="3 mois";
            ab.tarif=180;
        }

    if(d==3)
        {
            ab.duree="1 annee";
            ab.tarif=300;
        }
    if(d==4)
        {
            int nj ;
            cout<<"--> donnez le nombre du jour a entrainer "<<endl;
            in>>nj;
            ab.duree=" par jour";
            ab.tarif=nj*5;
        }
    return in ;
}


ostream& operator <<(ostream&out ,abonnement&ab)
{
    out<<">> le numero d'abonnement :"<<ab.numAb<<endl;
    out<<">> la duree d'abonnement :"<<ab.duree<<endl;
    out<<">> vous allez payer au totale:"<<ab.tarif<<" DT"<<endl;
    return out ;
}
