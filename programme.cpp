#include"programme.h"
#include"equipe.h"
#include"date.h"
#include<string>
#include <iostream>

using namespace std ;
programme::programme(int id,int i,string e,string s )
{   idpr=id;
    date d;
    equipe eqs;
    numENT=i;
    catPr=e;
    datePr=d;
    emplacement=s;
    eq=eqs;

}


void programme:: saisirPr()
{
    cout<<"Donner l'ID du programme : "<<endl;
    cin>>idpr;
    cout<<"donnez le numero de l'entraineur"<<endl;
    cin>>numENT;
    cout<<"la categorie du programme "<<endl;
    cin>>catPr;
    cout<<"la date du programme "<<endl;
    datePr.saisir();
    cout<<"l'emplacement du programme "<<endl;
    cin>>emplacement;
    cout<<"la liste des joueurs associee au programme"<<endl;
    eq.saisireq();

}



void programme::afficherPr()
{ cout<<"L'Id du programme : "<<idpr<<endl;
    cout<<"donnez le numero de l'entraineur"<<numENT<<endl;
    cout<<"la categorie du programme "<<catPr<<endl;
    cout<<"la date du programme "<<endl;
    datePr.afficher();
    cout<<"l'emplacement du programme "<<emplacement<<endl;
    cout<<"la liste des joueurs associee au programme"<<endl;
    eq.affichereq();


}
istream& operator >>(istream&in , programme&pr)
{ cout<<"Donner l'ID du programme"<<endl;
in>>pr.idpr;
    cout<<"donnez le numero de l'entraineur"<<endl;
    in>>pr.numENT;
    cout<<"la categorie du programme "<<endl;
    in>>pr.catPr;
    cout<<"la date du programme "<<endl;
    in>>pr.datePr;
    cout<<"l'emplacement du programme "<<endl;
    in>>pr.emplacement;
    cout<<"la liste des joueurs associee au programme"<<endl;
    in>>pr.eq;
    return in ;
}
ostream& operator <<(ostream&out , programme&pr)
{  out<<"Donner l'ID du programme"<<pr.idpr<<endl;
    out<<"donnez le numero de l'entraineur"<<pr.numENT<<endl;
    out<<"la categorie du programme "<<pr.catPr<<endl;
    out<<"la date du programme "<<pr.datePr<<endl;
    out<<"l'emplacement du programme "<<pr.emplacement<<endl;
    out<<"la liste des joueurs associee au programme"<<pr.eq<<endl;
    return out ;

}
void programme::modiferProgramme()
{

    int choix;
    cout<<"modifier (1) numENT  (2) catPr  ou (3) datePr ou (4) emplacement "<<endl;
    cin>>choix;
    system("cls");
    if(choix==1)
    {
        cout<<" modifier numEn "<<endl;
        int c;
        cout<<"le nouveau numero de lentraineur"<<endl;
        cin>>c;
        numENT=c;
    }

    if(choix==2)
    {
        cout<<" modifier la categorie du programme "<<endl;
        string c;
        cout<<"la nouvelle categorie du programme "<<endl;
        cin>>c;
        catPr=c;
    }
    if(choix==3)
    {
        cout<<" modifier la date du programme "<<endl;
        date d;
        cout<<"la nouvelle la date du programme "<<endl;
        cin>>d;
        datePr=d;
    }
    else if(choix==4)
    {
        cout<<" modifier l'emplacement programme "<<endl;
        string s;
        cout<<"la nouvelle l'emplacement du programme "<<endl;
        cin>>s;
        emplacement=s;

    }
}
