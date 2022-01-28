#ifndef ADMINISTRATEUR
#define ADMINISTRATEUR
#include<string>
#include<iostream>
#include"employee.h"
using namespace std;

class administrateur:public employee
{

protected:
    int idadmin;
public:
    administrateur(int=0,string="",string="",string="",int=0,int=1111);
    ~administrateur(void);
    void saisir();
    void afficher();
    friend istream& operator >>(istream& , administrateur&);
    friend ostream& operator <<(ostream& ,administrateur&);
    int getidadmin(){return idadmin;}
    void modiferEmployeeAdmin();
};
#endif // ADMINISTRATEUR
