#ifndef CLUB_H_INCLUDED
#define CLUB_H_INCLUDED
#include"employee.h"
#include"membre.h"
#include"administrateur.h"
#include"entraineur.h"
#include"ouvrier.h"
#include"matrielsportif.h"
#include"fournisseur.h"
#include"activitesportive.h"
#include"commande.h"
#include"programme.h"
#include"equipe.h"
//#include"salle.h"
#include<string>
#include<vector>
#include"invite.h"
using namespace std;
class Club
{
protected:
    float budget ;
public:
    vector<membre*>tab_mm;
    vector<activitesportive*>tab_act;
    vector<employee*>tab_em;
    //vector<salle*>tab_sa;
    vector<matrielsportif*>tab_c;
    vector<programme*>tab_pr;
    vector<commande*>tab_com;
    vector<equipe*>tab_eq;
    vector<fournisseur*>tab_f;
   // vector<invite*>tab_inv;
public:
    Club(float=0.0);
    ~Club(void);
    Club(const Club&);
    void remplirMembre();
    void remplirActivite();
    void remplirEmployee();
    //void remplirSalle();
    void remplirMatriel();
    void remplirProgramme();
    void remplirCommande();
    void remplirEquipe();
    void remplirFournisseur();



    void afficherMembre();
    void afficherActivite();
    void afficherEmployee();
    //void afficherSalle();
    void afficherMatriel();
    void afficheProgramme();
    void afficherCommande();
    void afficherEquipe();
    void afficherFournisseur();
    void afficherProgChoix(int);

    bool existeMembre(int);
    bool existeActivite(int);
    bool existeMatriel(int);
    //bool existeSalle(int);

    void ajouterMembre(membre);
    void ajouterEmployeeAdmin(administrateur);
    void ajouterEmployeeEntraineur(entraineur);
    void ajouterEmployeeOuvrier(ouvrier);
    void ajouterActivite(activitesportive);
    //void ajouterSalle(salle);
    void ajouterMatriel(matrielsportif);
    void ajouterProgramme(programme);
    void ajouterCommande(commande);
    void ajouterEquipe(equipe);
    void ajouterFournisseur(fournisseur);
    float totalsalaires();

    void modiferMembre(int);
    void modiferEmployee(int);
    //void modiferEmployeeAdmin(int);
    //void modiferEmployeeEntraineur(int);
    //void modiferEmployeeOuvrier(int);
    void modiferActivite(int);
    //void modiferSalle(int);
    void modiferMatriel(int);
    void modifierProgramme(int);
    void modifierCommande(int);
    void modifierEquipe(int);
    void modifierFournisseur(int);

    void supprimerMembre(int);
    void supprimerEmployee(int);
    void supprimerActivite(int);
    //void supprimerSalle(int);
    void supprimerMatriel(int);
    void supprimerProgramme(int);
    void supprimerCommande(int);
    void supprimerEquipe(int);
    void supprimerFournisseur(int);


    float bilan();
    float budget_abon();
    float budget_com();

    void ajout_mat_com();
    void enregistrer_membres();

    void lire_membres();
    void enregistrer_equipe();

    void lire_equipe();
    void remplirinvite();
    int recherche_eq(int);

    bool recherche_mem(membre);
    int chercher_equipe(equipe);
    int recherche_eq(fstream&, Club);
    int chercher_eq(equipe e);
int getBudget(){return budget;}
void setBudget(int zz){budget=zz;}
};
#endif // CLUB_H_INCLUDED
