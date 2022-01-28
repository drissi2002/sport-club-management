#include"commande.h"
#include<iostream>
using namespace std;

commande::commande(int num ,float f)
{
    numComm=num;
    montant=f;
}
void commande:: remplircom()
{
char rep;
cout<<"le numero de la commande"<<endl;
cin>>numComm;
do
    {

    cout<<"\n saisir code, prix unitaire, nb voulu ,et type du matriel "<<endl;
    matrielsportif *m=new matrielsportif;
    m->saisirmat();
    tab_comm.push_back(m);
    cout<<"\n rajouter un matriel? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');
}
float commande::Calculmontant()
{
    float mt=0 ;
    for(int i=0; i<tab_comm.size(); i++)
    {
       mt+=(( tab_comm[i]->prixunit) *(tab_comm[i]->nbmat));
    }
    montant=mt;
    return montant ;
}


void commande::affichercom()
{
cout<<"le numero de la commande est "<<numComm<<endl;
for(int i=0; i<tab_comm.size(); i++)
    {   cout<<"le "<<i+1 <<" ere matriel dans la commande"<<endl;
        tab_comm[i]->affichemat();
    }
    cout<<"le mantant totale de la commande est : "<<Calculmontant()<<"DT"<<endl;

}
commande::commande(const commande& w)
{
    numComm=w.numComm;
    for(int i=0; i<w.tab_comm.size(); i++)
    {
        matrielsportif *m=new matrielsportif(*w.tab_comm[i]);
        tab_comm.push_back(m);
    }
}
istream& operator >>(istream&in , commande&cm)
{
    char rep;
cout<<"le numero de la commande"<<endl;
in>>cm.numComm;
do
    {

    cout<<"\n saisir code, prix unitaire, nb voulu ,et type du matriel "<<endl;
    matrielsportif *m=new matrielsportif;
    in>>*m;
    cm.tab_comm.push_back(m);
    cout<<"\n rajouter un matriel? "<<endl;
    in>>rep;
    }
while (rep=='o' || rep=='O');
return in;
}
ostream& operator <<(ostream&out , commande&cm)
{
    out<<"le numero de la commande est "<<cm.numComm<<endl;
    for(int i=0; i<cm.tab_comm.size(); i++)
    {   out<<"le "<<i+1 <<" ere matriel dans la commande"<<endl;
        out<<*cm.tab_comm[i];
        out<<"----------------------------------------"<<endl;
    }
    out<<"le mantant totale de la commande est : "<<cm.Calculmontant()<<"DT"<<endl;
    return out;

}
commande::~commande()
{
for(int i=0; i<tab_comm.size(); i++)
    delete tab_comm[i];
tab_comm.clear();
}

bool commande::existe(long num)
{
for(int i=0; i<tab_comm.size(); i++)
if(tab_comm[i]->getcodemat()==num)
    return 1;
return 0;
}
void commande::ajouterMatriel(matrielsportif m)
{
bool res=existe(m.getcodemat());
if(res==0)
{
    matrielsportif *p=new matrielsportif(m);
    tab_comm.push_back(p);
}
else cout<<"\n le matirel sportif  existe deja !!! "<<endl;
}

void commande::supprimer(int ind)
{
    tab_comm.erase(tab_comm.begin()+ind);
}



