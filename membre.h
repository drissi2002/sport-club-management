#ifndef MEMBRE
#define MEMBRE
#include"date.h"
#include"abonnement.h"
#include <string>
#include<vector>
#include"activitesportive.h"
using namespace std;
class membre
{
protected:

    int CIN;
    string nom ;
    string prenom;
    date dateN;
    string adresse;
    int tel;
    int numAb ;
    float cotisation;
    vector<activitesportive*>tab_act;

public:
    membre(int=1111,string="",string="",string="",int=99999999,int=11111,float=0);
    membre(const membre&);
    ~membre(void);
    void saisirm();
    void affichem();
    friend istream& operator >>(istream& , membre&);
    friend ostream& operator <<(ostream& , membre&);
    friend istream& operator >>(istream& , membre *);
    friend ostream& operator <<(ostream& , membre *);
    int getCIN(){return CIN;}
    bool existe(int );
    void ajouteractivite(activitesportive );
    void supprimer(int);
    void modiferMembre();
    float getcot(){return cotisation;}



};
#endif // MEMBRE_H_INCLUDED
