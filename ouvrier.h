#ifndef OUVRIER_H_INCLUDED
#define OUVRIER_H_INCLUDED
#include"employee.h"
#include<iostream>
#include<string>
using namespace std;
class ouvrier :public  employee
{
protected:
    int idouvrier ;
    float salaire;

public:
    ouvrier(int=0,string="",string="",string="",int=999,int=1,float=0.0);
    ~ouvrier(void);
    virtual void saisir();
    virtual void afficher();
    friend istream& operator >>(istream& , ouvrier&);
    friend ostream& operator <<(ostream& , ouvrier&);
    void modiferEmployeeOuvrier();
    float getSalaire();
};


#endif // OUVRIER_H_INCLUDED
