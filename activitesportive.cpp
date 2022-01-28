#include"activitesportive.h"
#include<iostream>
using namespace std;
activitesportive::activitesportive(int na,string n,string c,int e,int s)
{
    numact=na;
    typeAct=n;
    categAct=c;
    numEntraineur= e;
    numSalle=s;
}
activitesportive::~activitesportive()
{
}
void activitesportive::saisirAct()
{
    cout<<"donnez  le numero l'activite sportive desiree"<<endl;
    cin>>numact;
    cout<<"donnez l'activite sportive desiree"<<endl;
    cin>>typeAct;
    cout<<"donnez sa categorie"<<endl;
    cin>>categAct;
    cout<<"donnez le numero d'entrainneur"<<endl;
    cin>>numEntraineur;
    cout<<"donnez le numero du salle d'entrainnement "<<endl;
    cin>>numSalle;

}
void activitesportive::afficherAct()
{
    cout<<" >>  le type de l'activite sportive est :"<<typeAct<<endl;
    cout<<" >>  sa categorie :"<<categAct<<endl;
    cout<<" >>  le numero d'entrainneur est :"<<numEntraineur<<endl;
    cout<<" >>  le numero du salle d'entrainnement :"<<numSalle<<endl;

}
istream& operator >>(istream& in , activitesportive& act)
{
    cout<<"donnez  le numero l'activite sportive desiree"<<endl;
    in>>act.numact;
    cout<<"donnez l'activite sportive desiree"<<endl;
    in>>act.typeAct;
    cout<<"donnez sa categorie"<<endl;
    in>>act.categAct;
    cout<<"donnez le numero d'entrainneur"<<endl;
    in>>act.numEntraineur;
    cout<<"donnez le numero du salle d'entrainnement "<<endl;
    in>>act.numSalle;
    return in ;
}
ostream& operator <<(ostream& out ,activitesportive&act)
{
    out<<" >>  le type de l'activite sportive est :"<<act.typeAct<<endl;
    out<<" >>  sa categorie :"<<act.categAct<<endl;
    out<<" >>  le numero d'entrainneur est :"<<act.numEntraineur<<endl;
    out<<" >>  le numero du salle d'entrainnement :"<<act.numSalle<<endl;
    return out ;
}
void activitesportive::modiferActivite()
{
    int choix;
    cout<<" modification :  1) modifier le typeAct "<<endl;
    cout<<"                 2) modifier la categAct "<<endl;
    cout<<"                 3) modifier le numEntraineur "<<endl;
    cout<<"                 4) modifier le numSalle "<<endl;
    cout<<"                 5) modifier le numAct "<<endl;
    cin>>choix;
    system("cls");
    if(choix==1)
        {
            string c;
            cout<<"le nouveau type de l'activite"<<endl;
            cin>>c;
            typeAct=c;
        }
    else if (choix==2)
        {
            string n;
            cout<<" la nouvelle categorie de l'activite"<<endl;
            cin>>n;
            categAct=n;
        }
    else if (choix==3)
        {
            int c;
            cout<<"le nouveau numero de l'entraineur"<<endl;
            cin>>c;
            numEntraineur=c;
        }
    else if (choix==4)
        {
            int c;
            cout<<"le nouveau numero de la salle"<<endl;
            cin>>c;
            numSalle=c;
        }
    else if (choix==5)
        {
            int c;
            cout<<"le nouveau numero de l'activite"<<endl;
            cin>>c;
            numact=c;
        }
}
