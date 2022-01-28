#ifndef FOURNISSEUR
#define FOURNISSEUR
#include<iostream>
#include"employee.h"
using namespace std;

class fournisseur
{
protected:

    int CIN;
    string nom ;
    string prenom;
    string adresse;
    int tel;
    int id;

public:
    fournisseur(int=0,int=0,string="",string="",string="",int=2222);
    ~fournisseur(void);
    void saisir();
    void afficher();
    friend istream& operator >>(istream& , fournisseur&);
    friend ostream& operator <<(ostream& ,fournisseur&);
    int getidfournisseur(){return id;}
    void modifier();
};
#endif // FOURNISSEUR
