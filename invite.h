#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include"date.h"
#include"abonnement.h"
#include <string>
#include<iostream>
#include<vector>
#include"activitesportive.h"
using namespace std;
class invite
{
public:

    int CIN;
    string nom ;
    string prenom;
    date dateN;
    string adresse;
    int tel;
public:
    invite(int=1111,string="",string="",string="",int=99999999);
    ~invite(void);
    void saisir_invite();
    void affiche_invite();
    friend istream& operator >>(istream& , invite&);
    friend ostream& operator <<(ostream& , invite&);
    int getCIN(){return CIN;}
    void modiferinvite();
};


#endif // JOUEUR_H_INCLUDED
