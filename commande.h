#ifndef COMMANDE_H_INCLUDED
#define COMMANDE_H_INCLUDED
#include"matrielsportif.h"
#include<iostream>
#include<vector>
using namespace std;
class commande
{
protected:
    int numComm;
    float montant;
    public:vector<matrielsportif*>tab_comm;
public:
    commande(int=0,float=0.0);
    ~commande(void);
    commande(const commande&);
    void remplircom();
    float Calculmontant();
    void affichercom();
    friend istream& operator >>(istream& , commande&);
    friend ostream& operator <<(ostream& , commande&);
    bool existe(long);
    void ajouterMatriel(matrielsportif);
    void supprimer(int);
    int getnumComm(){return numComm;}
};
#endif // COMMANDE_H_INCLUDED
