#include"matrielsportif.h"
#include<iostream>
using namespace std;

matrielsportif::matrielsportif(long l ,float p,int nb,string ty )
{
    codemat=l;
    prixunit=p;
    nbmat=nb;
    typemat=ty;
}
matrielsportif::~matrielsportif()
{
}
void matrielsportif::saisirmat()
{
    cout<<"donnez le code du matriel sportif"<<endl;
    cin>>codemat;
    cout<<"donnez son prix"<<endl;
    cin>>prixunit;
    cout<<"donnez le nombre voulu "<<endl;
    cin>>nbmat;
    cout<<"donnez son type"<<endl;
    cin>>typemat;
}

void matrielsportif::affichemat()
{
    cout<<" >> le code du matriel sportif :"<<codemat<<endl;
    cout<<" >> le prix unitaire du matriel :"<<prixunit<<"DT"<<endl;
    cout<<" >> le nombre commandee volu du matriel :"<<nbmat<<endl;
    cout<<" >> type du matriel :"<<" matriel de "<<typemat<<endl;
}
istream& operator >>(istream&in , matrielsportif&mat)
{
    cout<<"donnez le code du matriel sportif"<<endl;
    in>>mat.codemat;
    cout<<"donnez son prix"<<endl;
    in>>mat.prixunit;
    cout<<"donnez le nombre voulu "<<endl;
    in>>mat.nbmat;
    cout<<"donnez son type"<<endl;
    in>>mat.typemat;
    return in;

}
ostream& operator <<(ostream&out , matrielsportif&mat)
{
    out<<" >> le code du matriel sportif :"<<mat.codemat<<endl;
    out<<" >> le prix unitaire du matriel :"<<mat.prixunit<<"DT"<<endl;
    out<<" >> le nombre commandee volu du matriel :"<<mat.nbmat<<endl;
    out<<" >> type du matriel :"<<"matriel de "<<mat.typemat<<endl;
    return out ;
}
void matrielsportif::modiferMatriel( )
{
    long codemat;
    float prixunit;
    int nbmat;
    string typemat;

    int choix;
    cout<<" modification :  1) modifier la codemat "<<endl;
    cout<<"                 2) modifier le prixunit "<<endl;
    cout<<"                 3) modifier nbmat "<<endl;
    cout<<"                 4) modifier typemat "<<endl;
    cin>>choix;
    system("cls");
    if(choix==1)
        {
            long c;
            cout<<"le nouveau codemat"<<endl;
            cin>>c;
            codemat=c;
        }
    else if (choix==2)
        {
            float n;
            cout<<" le nouveau prixunit"<<endl;
            cin>>n;
            prixunit=n;
        }
    else if (choix==3)
        {
            int n;
            cout<<" le nouveau nbmat"<<endl;
            cin>>n;
            nbmat=n;
        }
    else if (choix==4)
        {
            string P;
            cout<<"le nouveau typemat"<<endl;
            cin>>P;
            typemat=P;
        }

}

