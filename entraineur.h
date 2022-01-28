#ifndef ENTRAINEUR_H_INCLUDED
#define ENTRAINEUR_H_INCLUDED
#include"employee.h"
#include"joueur.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;
class entraineur :public  employee
{
protected:
    int numEn;
    string catAct;

public:
    entraineur(){};
    entraineur(const entraineur &);
    ~entraineur(void);
    virtual void saisirEN();
    virtual void afficherEN();
    friend istream& operator >>(istream& , entraineur&);
    friend ostream& operator <<(ostream& , entraineur&);
    int getnumEn(){return numEn;}
    void modiferEmployeeEntraineur();

};


#endif // ENTRAINEUR_H_INCLUDED
