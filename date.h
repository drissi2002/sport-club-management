#ifndef DATE
#define DATE
#include<iostream>
using namespace std ;
class date
{
public:
    int jour;
    int mois;
    int annee;
public:
    virtual void saisir();
    virtual void afficher();
    friend istream& operator >>(istream& , date&);
    friend ostream& operator <<(ostream& , date&);
};
#endif // DATE
