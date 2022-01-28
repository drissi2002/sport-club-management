#ifndef EQUIPE_H_INCLUDED
#define EQUIPE_H_INCLUDED
#include"employee.h"
#include"joueur.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;
class equipe
{
protected:
    int numEq;
    string catEq;
    vector<joueur*>groupenCharge ;

public:
    equipe(){};
    equipe(const equipe &);
    ~equipe(void);
    virtual void saisireq();
    virtual void affichereq();
    friend istream& operator >>(istream& , equipe&);
    friend ostream& operator <<(ostream& , equipe&);
        friend istream& operator >>(istream& , equipe*);
    friend ostream& operator <<(ostream& , equipe*);
    int getnumEq(){return numEq;}
    bool existe(int );
    void ajouterme(joueur );
    void supprimer(int);
    float totalsalaire();
};



#endif // EQUIPE_H_INCLUDED
