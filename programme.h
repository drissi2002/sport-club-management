#ifndef PROGRAMME_H_INCLUDED
#define PROGRAMME_H_INCLUDED
#include"date.h"
#include"equipe.h"
#include<string>
#include<iostream>
#include"invite.h"
using namespace std ;
class programme
{
protected :
    int idpr;
    int numENT ;
    string catPr ;
    date datePr;
    string emplacement;
    equipe eq;

public:
    int getIDpr(){return idpr;}
    programme(int idr=1 ,int=1,string="",string="");
    ~programme(void){}
    virtual void saisirPr();
    virtual void afficherPr();
    friend istream& operator >>(istream& , programme&);
    friend ostream& operator <<(ostream& , programme&);
    void modiferProgramme();

};


#endif // PROGRAMME_H_INCLUDED
