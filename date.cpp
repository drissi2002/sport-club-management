#include"date.h"
#include<iostream>
using namespace std ;
void date :: saisir()
{
    cout<<"donnez le jour "<<endl;
    cin>>jour;
    cout<<"donnez le mois"<<endl;
    cin>>mois;
    cout<<"donnez l'annee"<<endl;
    cin>>annee;
}
void date :: afficher()
{
    cout<<">>"<<jour<<'/'<<mois<<'/'<<annee<<endl;
}
istream& operator >>(istream&in , date&da)
{
    cout<<"donnez le jour "<<endl;
    in>>da.jour;
    cout<<"donnez le mois"<<endl;
    in>>da.mois;
    cout<<"donnez l'annee"<<endl;
    in>>da.annee;
    return in ;

}
ostream& operator <<(ostream&out , date&da)
{
    out<<">>"<<da.jour<<'/'<<da.mois<<'/'<<da.annee<<endl;
    return out ;

}
