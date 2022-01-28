#ifndef ABONNEMENT_H_INCLUDED
#define ABONNEMENT_H_INCLUDED
#include<string>
#include<iostream>
#include"activitesportive.h"
using namespace std;
class abonnement
{
protected:
    int numAb;
    string duree;
    float tarif;
public:
    abonnement(int=333,string="",float=0.0);
    ~abonnement(void);
    void saisirAb();
    void afficherAb();
    friend istream& operator >>(istream& , abonnement&);
    friend ostream& operator <<(ostream& ,abonnement&);

};
#endif // ABONNEMENT_H_INCLUDED
