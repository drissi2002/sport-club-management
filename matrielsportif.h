#ifndef MATRIEL
#define MATRIEL
#include<iostream>
#include<string>
using namespace std;
class matrielsportif
{
public:
    long codemat;
    float prixunit;
    int nbmat;
    string typemat;
public:
    matrielsportif(long=00,float=0.0,int=0,string="");
    ~matrielsportif();
    void saisirmat();
    void affichemat();
    friend istream& operator >>(istream& , matrielsportif&);
    friend ostream& operator <<(ostream& , matrielsportif&);
    long getcodemat(){ return codemat; }
    float getprix(){return prixunit;}
    string gettypemat(){return typemat;}
    void modiferMatriel( );
    void setnbmat(int n){nbmat+=n;}
    int getnbmat(){return nbmat;}
};
#endif // MATRIEL_SPORTIF_H_INCLUDED
