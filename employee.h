#ifndef EMPLOYEE
#define EMPLOYEE
#include"date.h"
#include<string>
#include<iostream>
using namespace std;
class employee
{
protected:
    int CIN;
    string nom ;
    string prenom;
    date dateNaiss;
    string adresse;
    int tel;
    float salaire;

public:
    employee(int=0,string="",string="",string="",int=0,float=0);
    ~employee(void);
    virtual void saisir();
    virtual void afficher();
    friend istream& operator >>(istream& , employee&);
    friend ostream& operator <<(ostream& ,employee&);
    virtual void modiferEmployee();
    float getsalaire();
};
#endif // EMPLOYEE
