#include"activitesportive.h"
#include<iostream>
#include"joueur.h"
#include"entraineur.h"
#include<string>
using namespace std;

entraineur::entraineur(const entraineur & w)
{
    numEn=w.numEn;
    catAct=w.catAct;
    salaire=w.salaire ;
}

entraineur::~entraineur()
{}
void entraineur::saisirEN()
{

    employee::saisir();
    cout<<"donnez le numero de l'entraineur"<<endl;
    cin>>numEn;
    cout<<"la categorie d'activite "<<endl;
    cin>>catAct;
    cout<<"le salaire d'entraineur "<<endl;
    cin>>salaire;

}

void entraineur::afficherEN()
{
    employee::afficher();
    cout<<">>le numero de 'entraineur :"<<numEn<<endl;
    cout<<"la categorie d'activite "<<catAct<<endl;
    cout<<"le salaire de l'entrainneur "<<salaire<<endl;
}
 istream& operator >>(istream& in , entraineur& en)
 {
    char rep ;

    cout<<"donnez le numero de l'entraineur"<<endl;
    in>>en.numEn;
    en.saisir();
    cout<<"la categorie d'activite "<<endl;
    in>>en.catAct;
    cout<<"le salaire de l'entrainneur "<<endl;
    in>>en.salaire;
    return in ;
 }
ostream& operator <<(ostream&out , entraineur& en)
{
    out<<">>le numero de 'entraineur :"<<en.numEn<<endl;
    en.afficher();
    out<<"la categorie d'activite "<<en.catAct<<endl;
    out<<"le salaire de l'entrainneur "<<en.salaire<<endl;
    return out ;

return out ;
}



void entraineur::modiferEmployeeEntraineur()
{
    int choix;
    cout<<"modifier (1) numEN  (2) salaire  ou (3) les donnes personnelles"<<endl;
    cin>>choix;
    system("cls");
    if(choix==1)
    {
        cout<<" modifier numEn "<<endl;
        int c;
        cout<<"le nouveau numero de lentraineur"<<endl;
        cin>>c;
        numEn=c;
    }

    if(choix==2)
    {
        cout<<" modifier SALAIRE "<<endl;
        int c;
        cout<<"le nouveau SALAIRE de l'entrainneur "<<endl;
        cin>>c;
        salaire=c;
    }
    else if(choix==3)
        modiferEmployee();
}
