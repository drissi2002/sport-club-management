#include"membre.h"
#include<iostream>
#include"date.h"
#include"abonnement.h"
using namespace std;
membre::membre(int c,string n,string p,string a,int t,int ab,float cot)
{
    date d;
    CIN=c;
    nom =n;
    prenom=p;
    dateN=d;
    adresse=a;
    tel=t;
    numAb=ab ;
    cotisation=cot;

}

membre::membre(const membre& w)
{
    CIN=w.CIN;
    nom =w.nom;
    prenom=w.prenom;
    dateN=w.dateN;
    adresse=w.adresse;
    tel=w.tel;
    numAb=w.numAb ;
        cotisation=w.cotisation;
    for(int i=0; i<w.tab_act.size(); i++)
    {
        activitesportive *m=new activitesportive(*w.tab_act[i]);
        tab_act.push_back(m);
    }
}
membre::~membre()
{
    for(int i=0; i<tab_act.size(); i++)
        delete tab_act[i];
    tab_act.clear();
}
void membre::saisirm()
{
    char rep;
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
    cout<<"le num d'abonnement "<<endl;
    cin>>numAb;
      cout<<"Cotisation  "<<endl;
    cin>>cotisation;
    do
    {

    cout<<"\n saisir type et categorie d'Activite ,numero de l'Entraineur ,et numero de Salle "<<endl;
    activitesportive *m=new activitesportive;

    m->saisirAct();
    tab_act.push_back(m);
    cout<<"\n rajouter une autre activite? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');
}
void membre::affichem()
{
    cout<<">>la CIN :"<<CIN<<endl;
    cout<<">>le nom :"<<nom<<endl;
    cout<<">>le prenom :"<<prenom<<endl;
    cout<<">>la date de naissance :"<< endl;
    dateN.afficher();
    cout<<">>l'adresse :"<<adresse<<endl;
    cout<<">>le telephone :"<<tel<<endl;
    cout<<">>le numero d'abonnement :"<<numAb<<endl;
        cout<<">>la cotisation :"<<cotisation<<endl;
    for(int i=0; i<tab_act.size(); i++)
    {   cout<<"le "<<i+1 <<" ere activite "<<endl;
        tab_act[i]->afficherAct();
    }



}
istream& operator >>(istream&in , membre&m)
{
    char rep;
    cout<<"donnez la CIN"<<endl;
    in>>m.CIN;
    cout<<"donnez le nom"<<endl;
    in>>m.nom;
    cout<<"donnez le prenom"<<endl;
    in>>m.prenom;
    cout<<"donnez la date de naissance"<<endl;
    in>>m.dateN ;
    cout<<"donnez l'adresse"<<endl;
    in>>m.adresse;
    cout<<"donnez le telephone"<<endl;
    in>>m.tel;
    cout<<"le num d'abonnement "<<endl;
    in>>m.numAb;
       cout<<"la cotisation "<<endl;
    in>>m.cotisation;
    do
    {

    cout<<"\n saisir type et categorie d'Activite ,numero de l'Entraineur ,et numero de Salle "<<endl;
    activitesportive *a=new activitesportive;

    in>>*a;
    m.tab_act.push_back(a);
    cout<<"\n rajouter une autre activite? "<<endl;
    in>>rep;
    }
while (rep=='o' || rep=='O');
 return in ;
}
ostream& operator <<(ostream&out , membre&m)
{
    out<<">>la CIN :"<<m.CIN<<endl;
    out<<">>le nom :"<<m.nom<<endl;
    out<<">>le prenom :"<<m.prenom<<endl;
    out<<">>la date de naissance :"<<m.dateN<<endl;
    out<<">>l'adresse :"<<m.adresse<<endl;
    out<<">>le telephone :"<<m.tel<<endl;
    out<<">>le numero d'abonnement :"<<m.numAb<<endl;
        out<<">>la cotisation :"<<m.cotisation<<endl;
    for(int i=0; i<m.tab_act.size(); i++)
    {   out<<"le "<<i+1 <<" ere activite "<<endl;
        out<<*m.tab_act[i] ;
    }
}
bool membre::existe(int num)
{
for(int i=0; i<tab_act.size(); i++)
    if(tab_act[i]->getnumact()==num)
    return 1;
return 0;
}
void membre:: ajouteractivite(activitesportive acti)
{
    bool res=existe(acti.getnumact());
if(res==0)
{
    activitesportive*p=new activitesportive(acti);
    tab_act.push_back(p);
}
else cout<<"\n l'activite  existe deja !!! "<<endl;
}
void membre:: supprimer(int ind)
{
    tab_act.erase(tab_act.begin()+ind);
}

void membre::modiferMembre()
{
    int choix;
    cout<<" modification :  1) modifier la CIN "<<endl;
    cout<<"                 2) modifier nom "<<endl;
    cout<<"                 3) modifier prenom "<<endl;
    cout<<"                 4) modifier dateN "<<endl;
    cout<<"                 5) modifier adresse "<<endl;
    cout<<"                 6) modifier numAb "<<endl;
    cout<<"                 7) modifier Cotisation "<<endl;
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
            cout<<"le nouveau numero de l'abonnement "<<endl;
            cin>>c;
            numAb=c;
        }
         else if (choix==7)
        {
           float cc;
            cout<<"la nouvelle cotisation "<<endl;
            cin>>cc;
            cotisation=cc;
        }
}


