#ifndef ACTIVITESPORTIVE
#define ACTIVITESPORTIVE
#include<iostream>
#include<string>
using namespace std ;
class activitesportive
{
protected :
    int numact;
    string typeAct;
    string categAct;
    int numEntraineur ;
    int numSalle;

public:
    activitesportive(int=1,string="",string="",int=1,int=1);
    ~activitesportive(void);
    void saisirAct();
    void afficherAct();
    friend istream& operator >>(istream& , activitesportive&);
    friend ostream& operator <<(ostream& ,activitesportive&);
    int getnumact(){return numact;}
    void modiferActivite();
};
#endif
