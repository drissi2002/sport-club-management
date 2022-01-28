#include"activitesportive.h"
#include<iostream>
#include"joueur.h"
#include"equipe.h"
#include<string>
using namespace std;
equipe::equipe(const equipe & w)
{
    numEq=w.numEq;
    catEq=w.catEq;
    for(int i=0; i<w.groupenCharge.size(); i++)
    {
        joueur *j=new joueur(*w.groupenCharge[i]);
        groupenCharge.push_back(j);
    }

}
float equipe::totalsalaire()
{ float s=0;
    for(int i=0;groupenCharge.size();i++)
        s+=groupenCharge[i]->getSalaire();
}
equipe::~equipe()
{
for(int i=0; i<groupenCharge.size(); i++)
        delete groupenCharge[i];
    groupenCharge.clear();
}

void equipe::saisireq()
{
    char rep ;
    cout<<"donnez le numero de l'equipe"<<endl;
    cin>>numEq;
    cout<<"la categorie d'l'equipe "<<endl;
    cin>>catEq;
    do
    {

    cout<<"\n saisir les donnees de chaque joueur dans l'equipe  "<<endl;
    joueur *j=new joueur;
    j->saisirj();
    groupenCharge.push_back(j);
    cout<<"\n rajouter un autre joueur ? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

}
void equipe::affichereq()
{
    cout<<">>le numero de l'equipe :"<<numEq<<endl;
    cout<<"la categorie d'l'equipe :"<<catEq<<endl;
    for(int i=0; i<groupenCharge.size(); i++)
    {   cout<<"le "<<i+1 <<" ere membre du groupe  "<<endl;
        groupenCharge[i]->affichej();
    }

}
istream& operator >>(istream& in , equipe& en)
 {
    char rep ;

    cout<<"le numero de l'equipe :"<<endl;
    in>>en.numEq;
    cout<<"la categorie d'l'equipe :"<<endl;
    in>>en.catEq;
    do
    {

    cout<<"\n saisir les donnees de chaque joueur dans l'equipe  "<<endl;
    joueur *j=new joueur;
    in>>*j;
    en.groupenCharge.push_back(j);
    cout<<"\n rajouter un autre joueur ? "<<endl;
    in>>rep;
    }
while (rep=='o' || rep=='O');
return in ;

 }
ostream& operator <<(ostream&out , equipe& en)
{
    out<<">>le numero de 'entraineur :"<<en.numEq<<endl;
    out<<"la categorie d'activite "<<en.catEq<<endl;
    for(int i=0; i<en.groupenCharge.size(); i++)
    {   cout<<"le "<<i+1 <<" er joueur de l'equipe  "<<endl;
        out<<*en.groupenCharge[i];
        out<<"----------------------------------------"<<endl;
    }

return out ;
}
istream& operator >>(istream& in , equipe* en)
 {
    char rep ;

    cout<<"le numero de l'equipe :"<<endl;
    in>>en->numEq;
    cout<<"la categorie d'l'equipe :"<<endl;
    in>>en->catEq;
    do
    {

    cout<<"\n saisir les donnees de chaque joueur dans l'equipe  "<<endl;
    joueur *j=new joueur;
    in>>*j;
    en->groupenCharge.push_back(j);
    cout<<"\n rajouter un autre joueur ? "<<endl;
    in>>rep;
    }
while (rep=='o' || rep=='O');
return in ;

 }
ostream& operator <<(ostream&out , equipe *en)
{
    out<<">>le numero de 'entraineur :"<<en->numEq<<endl;
    out<<"la categorie d'activite "<<en->catEq<<endl;
    for(int i=0; i<en->groupenCharge.size(); i++)
    {   cout<<"le "<<i+1 <<" er joueur de l'equipe  "<<endl;
        out<<*en->groupenCharge[i];
        out<<"----------------------------------------"<<endl;
    }

return out ;
}




bool equipe::existe(int c )
{
    for(int i=0; i<groupenCharge.size(); i++)
        if(groupenCharge[i]->getCIN()== c)
        return 1;
    return 0;

}
void equipe:: ajouterme(joueur j )
{
      bool res=existe(j.getCIN());
if(res==0)
{
    joueur*p=new joueur(j);
    groupenCharge.push_back(p);
}
else cout<<"\n le joueur existe deja dans ce groupe  !!! "<<endl;
    }
void equipe::supprimer(int ind)
{
     groupenCharge.erase(groupenCharge.begin()+ind);
}
