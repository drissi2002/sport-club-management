#include"administrateur.h"
#include<iostream>
using namespace std;
administrateur::administrateur(int c,string n,string p,string a,int t,int ida ):employee(c,n,p,a,t)
{
    idadmin=ida;
}
administrateur::~administrateur()
{

}
void administrateur::saisir()
{
    cout<<" donnez l'ID de l'admin"<<endl;
    cin>>idadmin;
    employee::saisir();
}
void administrateur::afficher()
{
    cout<<"l'ID de l'admin"<<idadmin<<endl;
    employee::afficher();
}
 istream& operator >>(istream&in , administrateur&ad)
 {
    cout<<" donnez l'ID de l'admin"<<endl;
    in>>ad.idadmin;
    ad.saisir();
    return in ;
 }
 ostream& operator <<(ostream&out ,administrateur&ad)
 {
     cout<<"l'ID de l'admin"<<ad.idadmin<<endl;
     ad.afficher();
     return out ;
 }
void administrateur::modiferEmployeeAdmin()
{
    int choix;
    cout<<"modifier (1) ID ou  (2) les donnes "<<endl;
    cin>>choix;
    system("cls");
    if(choix==1)
    {
        cout<<" modifier l'ID "<<endl;
        int c;
        cout<<"le nouveau ID "<<endl;
        cin>>c;
        idadmin=c;
    }
    else if(choix==2)
        modiferEmployee();

}
