#include <iostream>
#include"employee.h"
#include"administrateur.h"
#include"fournisseur.h"
#include"Club.h"
#include"commande.h"
#include"fournisseur.h"
#include"membre.h"
#include"abonnement.h"
#include"activitesportive.h"
#include"matrielsportif.h"
#include"joueur.h"
#include"programme.h"
#include"equipe.h"


using namespace std;

int main()
{ system("color E0");
    Club C(10000);
    int choix;
    int ide;
    int x;
    int choix1;
    char rep;
    string username , password;
    do{
                cout<<"------------------------------------Esperance Sportive De Tunis Club-------------------------------------"<<endl;
        cout<<"\n"<<endl;
        cout<<" Vous etes un : \n 1/Invite \n 2/Admin "<<endl;
        cin>>choix;
if(choix==2)
    {system("CLS");
        do{cout<<"Username : ";
        cin>>username;
        cout<<"Password : ";
        cin>>password;
        if(username!="admin" || password!="admin")cout<<"Wrong Username or Password !!"<<endl;}while(username!="admin" || password!="admin");
        system("CLS");
        do
    {
        cout<<"------------------------------------Dashboard Admin-------------------------------------"<<endl;
        cout<<"\n"<<endl;
        cout<<" 1) gestion Membre "<< endl;
        cout<<" 2) gestion activite sportive"<< endl;
        cout<<" 3) gestion employee "<< endl;
        cout<<" 4) gestion materielles sportifs "<< endl;
        cout<<" 5) Transactions commerciales"<<endl;
        cout<<" 6) gestion Programme"<<endl;
        cout<<" 7) gestion financiere"<<endl;
        cout<<" 8) gestion des equipes"<<endl;
        cin>>choix;
        system("cls");
        if (choix==1)
        {
            int choix1;
            cout<<" 1) Remplir Membre "<< endl;
            cout<<" 2) Afficher Membre"<< endl;
            cout<<" 3) Ajouter Membre"<< endl;
            cout<<" 4) Modifier Membre "<< endl;
            cout<<" 5) Supprimer Membre"<< endl;
            cout<<" 6) Totale Cotisation Membres"<<endl;


            cin>>choix1;
            system("cls");
            if (choix1==1)
                {C.remplirMembre();
                C.enregistrer_membres();}
            else if (choix1==2)
                C.afficherMembre();
            else if (choix1==3)
                {membre mm;
            mm.saisirm();
                C.ajouterMembre(mm);}
            else if (choix1==4)
            { int id;
                cout<<"Donner L'ID du membre a modifier : ";
                cin>>id;

                C.modiferMembre(id);}
            else if (choix1==5)
            { int id;
                cout<<"Donner L'ID du membre a Supprimer : ";
                cin>>id;

                C.supprimerMembre(id);}
                else if(choix1==6)
                {
                    float cc=C.budget_abon();
                    cout<<"Totale Cotisation Memebres : "<<cc<<endl;
                }

        }
        else
            if(choix==6)
        { cout<<" 1) Remplir Programme "<< endl;
            cout<<" 2) Afficher Programme "<< endl;
            cout<<" 3) Ajouter Programme "<< endl;
            cout<<" 4) Modifier Programme "<< endl;
            cout<<" 5) Supprimer Programme "<< endl;
            cin>>choix1;
            system("cls");
               if (choix1==1)
                C.remplirProgramme();
            else if (choix1==2)
                C.afficheProgramme();


        }

        else if (choix==2)
        {
            int choix1 ;
            cout<<" 1) Remplir Activite Sportive "<< endl;
            cout<<" 2) Afficher Activite Sportive"<< endl;
            cout<<" 3) Ajouter Activite Sportive"<< endl;
            cout<<" 4) Modifier Activite Sportive"<< endl;
            cout<<" 5) Supprimer Activite Sportive"<< endl;
            cin>>choix1;
            system("cls");
            if (choix1==1)
                C.remplirActivite();
            else if (choix1==2)
                C.afficherActivite();
            else if (choix1==3)
            {
                activitesportive aa;
                aa.saisirAct();

                C.ajouterActivite(aa);}
            else if (choix1==4)
            { int id;
                cout<<"Donner L'ID d'activite a modifier : ";
                cin>>id;

                C.modiferActivite(id);}
            else if (choix1==5)
            {
                int id;
                cout<<"Donner L'ID d'activite a supprimer : ";
                cin>>id;


                C.supprimerActivite(id);}
        }
        else if (choix==3)
        {
            int choix1 ;
             cout<<"1) Remplir Employee "<< endl;
            cout<<" 2) Afficher Employee"<< endl;
            cout<<" 3) Ajouter Employee"<< endl;
            cout<<" 4) Modifier Employee"<< endl;
            cout<<" 5) Supprimer Employee"<< endl;
            cout<<" 6) Totale Salaires Employees"<<endl;
            cin>>choix1;
            system("cls");
            if (choix1==1)
                C.remplirEmployee();
            else if (choix1==2)
                C.afficherEmployee();
                 else if (choix1==3)
            {
                int chx;
                cout<<"voulez vous ajoutez un :(1)administrateur "<<endl;
                cout<<"                        (2)entraineur "<<endl;
                cout<<"                        (3)ouvrier "<<endl;
                cin>>chx;
                system("cls");
                if(chx==1)
                {
                    administrateur ad;
                    ad.saisir();
                    C.ajouterEmployeeAdmin(ad);
                }

                else if(chx==2)
                    {
                        entraineur e;
                        e.saisir();
                        C.ajouterEmployeeEntraineur(e);
                    }
                else if(chx==3)
                    {
                        ouvrier o;
                        o.saisir();
                        C.ajouterEmployeeOuvrier(o);
                    }}

            else if (choix1==4)
            {
                int id;
                cout<<"Donner L'ID d'employee a modifier : ";
                cin>>id;


                C.modiferEmployee(id);}
            else if (choix1==5)
                {
                int id;
                cout<<"Donner L'ID d'employee a supprimer: ";
                cin>>id;

                C.supprimerEmployee(id);}
                else if(choix1==6)
                {
                   float hh=C.totalsalaires();
                   cout<<"Totale Salaires : "<<hh<<endl;

                }




        }

        else if (choix==4)
        {
            int choix1 ;
            cout<<" 1) Remplir Materielle Sportif "<< endl;
            cout<<" 2) Afficher Materielle Sportif"<< endl;
            cout<<" 3) Ajouter Materielle Sportif "<< endl;
            cout<<" 4) Modifier Materielle Sportif"<< endl;
            cout<<" 5) Supprimer Materielle Sportif"<< endl;
            cout<<" 6) Mettre a jour le stock"<<endl;
            cin>>choix1;
            if (choix1==1)
               {
                C.remplirMatriel();
               }
            else if (choix1==2)
                {
                    C.afficherMatriel();
                }
                else if(choix1==3)
                {
                    matrielsportif ms;
                    ms.saisirmat();
                    C.ajouterMatriel(ms);
                }
            else if (choix1==4)
                {
                    int ind;
                    cout<<"l'indice a modifier"<<endl;
                    cin>>ind;
                   C.modiferMatriel(ind);
                }
            else if (choix1==5)
                {
                    int ind;
                    cout<<"l'indice a supprimer"<<endl;
                    cin>>ind;
                    C.supprimerMatriel(ind);
                }
                else if(choix1==6)
                { C.ajout_mat_com();
                C.afficherMatriel();

                }

        }


        else if (choix==5)
        { int choix2;
        cout<<" 1)Gestion Fournisseurs "<<endl;
        cout<<" 2) Gestion Commandes " <<endl;
        cin>>choix2;
            int choix1 ;
         if(choix2==2)
         {cout<<" 1) Remplir Commande "<< endl;
            cout<<" 2) Afficher Commande"<< endl;
            cout<<" 3) Ajouter Commande "<< endl;
            cout<<" 4) Supprimer Commande"<< endl;
            cout<<" 5) Totale prix commandes"<<endl;
            cin>>choix1;
            system("cls");
            if (choix1==1)
               {
                   C.remplirCommande();
               }
            else if (choix1==2)
                {
                    C.afficherCommande();
                }
            else if (choix1==3)
                { commande cc;
                cc.remplircom();
                   C.ajouterCommande(cc);
                }
            else if (choix1==4)
                {
                    int ind;
                    cout<<"l'indice a Supprimer"<<endl;
                    cin>>ind;
                   C.supprimerCommande(ind);
                }
                else if(choix1==5)
                {
                   float bb=C.budget_com();
                   cout<<"Totale prix commandes : "<<bb<<endl;
                }

        }
        else if(choix2==1)
        {cout<<" 1) Remplir Fournisseur "<< endl;
            cout<<" 2) Afficher Fournisseur"<< endl;
            cout<<" 3) Modifier Fournisseur "<< endl;
            cout<<" 4) Supprimer Fournisseur"<< endl;
            cout<<" 5) Ajouter Fournisseur "<< endl;
            cin>>choix1;
            system("cls");
            if(choix1==1)
            {
                C.remplirFournisseur();
            }
            else if(choix1==2)
            {
                C.afficherFournisseur();
            }
            else if(choix1==3)
            {
                int ind;
                    cout<<"l'indice a modifier"<<endl;
                    cin>>ind;
                C.modifierFournisseur(ind);
            }
            else if(choix1==4)
            { int ind;
                    cout<<"l'indice a supprimer"<<endl;
                    cin>>ind;
                C.supprimerFournisseur(ind);

            }
              else if(choix1==5)
            { fournisseur f;
            f.saisir();
                C.ajouterFournisseur(f);

            }


        }}
        else if(choix==6)
        {
            C.bilan();
        }
        else if(choix==7)
        {
            cout<<"1)Budget"<<endl;
            cout<<"2)Bilan"<<endl;
            int zz;
            cin>>zz;
            if(zz==1)
            {
               int x=C.getBudget();
               cout<<"Budget = "<<x<<endl;
            }
            else if(zz==2)
                {
                    float h=C.bilan();
                    C.setBudget(h);
                    if(h>=0)
    cout<<"Bilan Positive : "<<h<<endl;
else
    cout<<"Bilan Negative : "<<h<<endl;
                }

        }
        else if (choix==8)
        {
            int choix1 ;
            cout<<" 1) Remplir Equipe "<< endl;
            cout<<" 2) Afficher Equipe"<< endl;
            cout<<" 3) Ajouter Equipe "<< endl;
            cout<<" 4) Modifier Equipe"<< endl;
            cout<<" 5) Supprimer Equipe"<< endl;
            cin>>choix1;
            if (choix1==1)
               {
                C.remplirEquipe();
                C.enregistrer_equipe();               }
            else if (choix1==2)
                {
                    C.afficherEquipe();
                }
                else if(choix1==3)
                {
                    equipe ms;
                    ms.saisireq();
                    C.ajouterEquipe(ms);
                }
            else if (choix1==4)
                {
                    int ind;
                    cout<<"l'indice a supprimer"<<endl;
                    cin>>ind;
                    C.supprimerEquipe(ind);
                }

        }
        cout<<"\n Voulez vous revenir au menu principale ? "<<endl;
        cin>>rep;
        system("cls");
    } while (rep=='o' || rep=='O');
    }
        if(choix==1)
    { system("CLS");  cout<<"------------------------------------gestion Commande-------------------------------------"<<endl;
        cout<<"\n"<<endl;
  C.remplirProgramme();
    cout<<"Choisir un programme a participer : "<<endl<<"choix : ";
    cin>>x;
      C.afficherProgChoix(x);



    }
  cout<<"\n Voulez vous revenir au menu Admin/Invite ? "<<endl;
        cin>>rep;
        system("cls");}while (rep=='o' || rep=='O');

return 0;
}
