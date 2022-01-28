#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include"date.h"
#include"abonnement.h"
#include <string>
#include<iostream>
#include<vector>
#include"activitesportive.h"
using namespace std;
class joueur
{
protected:

    int CIN;
    string nom ;
    string prenom;
    date dateN;
    string adresse;
    int tel;
    float salaire;

public:
    joueur(int=1111,string="",string="",string="",int=99999999,float=0.0);
    ~joueur(void);
    void saisirj();
    void affichej();
    friend istream& operator >>(istream& , joueur&);
    friend ostream& operator <<(ostream& , joueur&);
    int getCIN(){return CIN;}
    void modiferjoueur();
    float getSalaire();
};


#endif // JOUEUR_H_INCLUDED
