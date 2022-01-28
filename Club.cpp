#include"Club.h"
#include"date.h"
#include<typeinfo>
#include"employee.h"
#include"administrateur.h"
#include"entraineur.h"
#include"ouvrier.h"
#include"commande.h"
#include"membre.h"
#include"activitesportive.h"
#include"invite.h"
#include <ostream>
#include <istream>
#include <fstream>
#include"programme.h"
using namespace std ;
Club::Club(float f)
{
    budget=f;
}

Club::Club(const Club&w)
{
for(int i=0; i<w.tab_mm.size(); i++)
    {
        membre *mm=new membre(*w.tab_mm[i]);
        tab_mm.push_back(mm);
}
for(int i=0; i<w.tab_act.size(); i++)
    {
        activitesportive *act=new activitesportive(*w.tab_act[i]);
        tab_act.push_back(act);
}

employee*e;
for(int i=0; i<w.tab_em.size(); i++)
    {
        if(typeid(*w.tab_em[i])==typeid(administrateur))
            {
                e=new administrateur(static_cast<const administrateur&>(*w.tab_em[i]));
                tab_em.push_back(e);
            }
            else if (typeid(*w.tab_em[i])== typeid(entraineur) )
            {
                e=new entraineur( static_cast<const entraineur&>(*w.tab_em[i]));
                tab_em.push_back(e);
            }
            else if (typeid(*w.tab_em[i])== typeid(ouvrier) )
            {
                e=new ouvrier( static_cast<const ouvrier&>(*w.tab_em[i]));
                tab_em.push_back(e);
            }
    }
    /*for(int i=0; i<w.tab_sa.size(); i++)
    {
       salle*sal=new salle(*w.tab_sa[i]);
        tab_sa.push_back(sal);
        }
        */
    for(int i=0; i<w.tab_c.size(); i++)
    {
        matrielsportif *mat=new matrielsportif(*w.tab_c[i]);
        tab_c.push_back(mat);
        }

}

Club::~Club()
{
for(int i=0; i<tab_mm.size(); i++)
    delete tab_mm[i];
tab_mm.clear();
for(int i=0; i<tab_act.size(); i++)
    delete tab_act[i];
tab_act.clear();
for(int i=0; i<tab_em.size(); i++)
    delete tab_em[i];
tab_em.clear();
//for(int i=0; i<tab_sa.size(); i++)
    //delete tab_sa[i];
//tab_sa.clear();
for(int i=0; i<tab_c.size(); i++)
    delete tab_c[i];
tab_c.clear();
}

void Club::remplirMembre()
{
    char rep;
    do
    {
    cout<<"\n saisir CIN, nom ,prenom ,dateN,adresse et type abonnement "<<endl;
    membre *mm=new membre;
    mm->saisirm();
    tab_mm.push_back(mm);
    cout<<"\n rajouter un autre membre? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');
}





void Club::remplirActivite()
{
    char rep;
    do
    {

    cout<<"\n saisir type activite et categorie activite"<<endl;
    activitesportive *act=new activitesportive;
    act->saisirAct();
    tab_act.push_back(act);
    cout<<"\n rajouter une autre activite ? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');
}

void Club:: remplirEmployee()
{
employee *e;
 int choix;
 char rep;
 do
 {
      cout<<"\n Tapez : 1)administrarteur "<<endl;
      cout<<"\n         2)entrainneur"<<endl;
      cout<<"\n         3)ouvrier"<<endl;
      cin>>choix;
      if (choix==1) e=new administrateur();
      else if (choix==2) e=new entraineur();
      else if (choix==3) e=new ouvrier();
      else break ;
      e->saisir();
      tab_em.push_back(e);
      cout<<"\n rajouter un autre employee ? "<<endl;
      cin>>rep;
 }
 while (rep=='o' || rep=='O');
}
/*void Club::remplirSalle()
{
    char rep;
    do
    {

    cout<<"\n saisir  les salles d'entrainnemet "<<endl;
    salle *sa=new salle;
    sa->saisirSalle();
    tab_sa.push_back(sa);
    cout<<"\n rajouter un autre salle ? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

} */
void Club::remplirFournisseur()
{
    char rep;
    do
    {

    cout<<"\n saisir  l'ensemble des matriels du Club "<<endl;
    fournisseur *mat=new fournisseur;
    mat->saisir();
    tab_f.push_back(mat);
    cout<<"\n rajouter un autre fournisseur? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

}
void Club::remplirMatriel()
{
    char rep;
    do
    {

    cout<<"\n saisir  l'ensemble des matriels du Club "<<endl;
    matrielsportif *mat=new matrielsportif;
    mat->saisirmat();
    tab_c.push_back(mat);
    cout<<"\n rajouter un autre equipement ? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

}

void Club::remplirEquipe()
{
    char rep;
    do
    {

    cout<<"\n saisir  l'ensemble d'equipes du Club "<<endl;
    equipe *mat=new equipe;
    mat->saisireq();
    tab_eq.push_back(mat);
    cout<<"\n rajouter une autre equipe ? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

}

void Club::remplirProgramme()
{
    char rep;
    do
    {

    cout<<"\n saisir  l'ensemble des programmes du Club "<<endl;
    programme *mat=new programme;
    mat->saisirPr();
    tab_pr.push_back(mat);
    cout<<"\n rajouter un autre programme ? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

}
void Club::remplirCommande()
{
    char rep;
    do
    {

    cout<<"\n saisir  l'ensemble des commandes du Club "<<endl;
    commande *mat=new commande;
    mat->remplircom();
    tab_com.push_back(mat);
    cout<<"\n rajouter une autre commande ? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

}
void Club::afficheProgramme()
   {
    cout<<"les programmes de club sont : "<<endl;
    for(int i=0; i<tab_pr.size(); i++)
        {
            tab_pr[i]->afficherPr();
            cout<<"---------------------------------------"<<endl;
        }
   }
   void Club::afficherCommande()
   {
    cout<<"les commandes de club sont : "<<endl;
    for(int i=0; i<tab_com.size(); i++)
        {
            tab_com[i]->affichercom();
            cout<<"---------------------------------------"<<endl;
        }
   }
     void Club::afficherFournisseur()
   {
    cout<<"les fournisseurs de club sont : "<<endl;
    for(int i=0; i<tab_f.size(); i++)
        {
            tab_f[i]->afficher();
            cout<<"---------------------------------------"<<endl;
        }
   }
void Club::afficherEquipe()
   {
    cout<<"les equipes de club sont : "<<endl;
    for(int i=0; i<tab_eq.size(); i++)
        {
            tab_eq[i]->affichereq();
            cout<<"---------------------------------------"<<endl;
        }
   }


void Club::afficherMembre()
   {
    cout<<"les membres de club sont : "<<endl;
    for(int i=0; i<tab_mm.size(); i++)
        {
            tab_mm[i]->affichem();
            cout<<"---------------------------------------"<<endl;
        }
   }
void Club:: afficherActivite()
  {
    cout<<"les activites pratiquees dans le club sont : "<<endl;
    for(int i=0; i<tab_act.size(); i++)
        {
            tab_act[i]->afficherAct();
            cout<<"---------------------------------------"<<endl;
        }
  }
void Club:: afficherEmployee()
{
    cout<<"les employees de club sont : "<<endl;
    for(int i=0; i<tab_em.size(); i++)
    {
            tab_em[i]->afficher();
            cout<<"---------------------------------------"<<endl;
    }
}
/*void Club ::afficherSalle()
{

  cout<<"les salles utilisees par le club sont : "<<endl;
    for(int i=0; i<tab_sa.size(); i++)
    {
        tab_sa[i]->afficherSalle();
        cout<<"---------------------------------------"<<endl;
    }

}*/
void Club ::afficherMatriel()
{
    cout<<"le matriel sportif utilise par le club est : "<<endl;
    for(int i=0; i<tab_c.size(); i++)
    {
        tab_c[i]->affichemat();
        cout<<"---------------------------------------"<<endl;
    }

}

bool Club::existeMembre(int c)
{
for(int i=0; i<tab_mm.size(); i++)
if(tab_mm[i]->getCIN()==c)
    return 1;
return 0;
}
bool Club::existeActivite(int t )
{
for(int i=0; i<tab_act.size(); i++)
if(tab_act[i]->getnumact()==t)
    return 1;
return 0;
}
/*bool Club::existeSalle(int n)
{
for(int i=0; i<tab_sa.size(); i++)
if(tab_sa[i]->getnumsalle()==n)
    return 1;
return 0;
}*/
bool Club::existeMatriel(int num)
{
for(int i=0; i<tab_c.size(); i++)
if(tab_c[i]->getcodemat()==num)
    return 1;
return 0;
}
void Club:: ajouterProgramme(programme mm)
{
    programme *p=new programme(mm);
    tab_pr.push_back(p);
}
void Club:: ajouterCommande(commande mm)
{
    commande *p=new commande(mm);
    tab_com.push_back(p);
}
void Club:: ajouterEquipe(equipe mm)
{
    equipe *p=new equipe(mm);
    tab_eq.push_back(p);
}
void Club:: ajouterFournisseur(fournisseur mm)
{
    fournisseur *p=new fournisseur(mm);
    tab_f.push_back(p);
}

void Club:: ajouterMembre(membre mm)
{
  bool res=existeMembre(mm.getCIN());
if(res==0)
{
    membre *p=new membre(mm);
    tab_mm.push_back(p);
}
else cout<<"\n le membre existe deja !!! "<<endl;
}
void  Club::ajouterEmployeeAdmin(administrateur a )
{
    administrateur*q=new administrateur(a);
    tab_em.push_back(q);

}
void  Club::ajouterEmployeeEntraineur(entraineur e)
{
    entraineur*q=new entraineur(e);
    tab_em.push_back(q);
}
void  Club::ajouterEmployeeOuvrier(ouvrier o)
{
    ouvrier*q=new ouvrier(o);
    tab_em.push_back(q);
}
void  Club::ajouterActivite(activitesportive a)
{
      bool res=existeActivite(a.getnumact());
if(res==0)
{
    activitesportive *p=new activitesportive(a);
    tab_act.push_back(p);
}
else cout<<"\n l'Activite sportive existe deja !!! "<<endl;
}
/*void Club:: ajouterSalle(salle s)
{
      bool res=existeSalle(s.getnumsalle());
if(res==0)
{
    salle *p=new salle(s);
    tab_sa.push_back(p);
}
else cout<<"\n la salle deja existe  !!! "<<endl;
}*/
void Club:: ajouterMatriel(matrielsportif ma)
{
      bool res=existeMatriel(ma.getcodemat());
if(res==0)
{
    matrielsportif *p=new matrielsportif(ma);
    tab_c.push_back(p);
}
else cout<<"\n l'equipement existe deja !!! "<<endl;
}
void Club::modifierProgramme(int ind)
{
    tab_pr[ind]->modiferProgramme();
}
void Club::modifierFournisseur(int ind)
{
    tab_f[ind]->modifier();
}


void Club::modiferMembre(int ind)
{
    tab_mm[ind]->modiferMembre();
}
void Club::modiferEmployee(int ind)
{
    tab_em[ind]->modiferEmployee();
}
void Club::modiferActivite(int ind )
{
  tab_act[ind]->modiferActivite();
}
/*void Club::modiferSalle(int ind )
{
tab_sa[ind]->modiferSalle();
}*/
void Club::modiferMatriel(int ind )
{
 tab_c[ind]->modiferMatriel();
}
void Club::supprimerEquipe(int ind)
{
    tab_eq.erase(tab_eq.begin()+ind);
}
void Club::supprimerCommande(int ind)
{
    tab_com.erase(tab_com.begin()+ind);
}
void Club:: supprimerMembre(int ind)
{
    tab_mm.erase(tab_mm.begin()+ind);
}
void Club::supprimerFournisseur(int ind)
{
    tab_f.erase(tab_f.begin()+ind);
}
void Club::supprimerEmployee(int ind)
{
   tab_em.erase(tab_em.begin()+ind);
}
void Club:: supprimerActivite(int ind)
{
    tab_act.erase(tab_act.begin()+ind);
}
/*void Club:: supprimerSalle(int ind )
{
    tab_sa.erase(tab_sa.begin()+ind);
}*/
void Club:: supprimerMatriel(int ind )
{
    tab_c.erase(tab_c.begin()+ind);
}
void Club:: supprimerProgramme(int ind )
{
    tab_pr.erase(tab_pr.begin()+ind);
}
float Club::totalsalaires()
{
    float s=0.0;
    for(int i=0; i<tab_eq.size(); i++)
        s+=tab_eq[i]->totalsalaire();

        for(int i=0; i<tab_em.size(); i++)
        s+=tab_em[i]->getsalaire();

        return s;

}
  void Club::afficherProgChoix(int x)
  {
      for(int i=0; i<tab_pr.size(); i++)
        if(tab_pr[i]->getIDpr()==x)
        {cout<<"Programme choisit : "<<endl;


        tab_pr[i]->afficherPr();}

  }



float Club::budget_abon()
{
     float s=0.0;
    for(int i=0; i<tab_mm.size(); i++)
        s+=tab_mm[i]->getcot();
    return s;
}
float Club::budget_com()
{     float s=0.0;
    for(int i=0; i<tab_com.size(); i++)
        s+=tab_com[i]->Calculmontant();
return s;
}

float Club::bilan()
{

float s=(budget_abon()+budget)-totalsalaires()-budget_com();
return s;}

void Club::ajout_mat_com()
{ for(int i=0; i<tab_com.size(); i++)
 {for(int k=0;k<tab_com[i]->tab_comm.size();k++)
 {for(int j=0;j<tab_c.size();j++)
 if(((tab_com[i]->tab_comm[k])->getcodemat())==(tab_c[j]->getcodemat()))
 tab_c[j]->setnbmat(tab_com[i]->tab_comm[k]->getnbmat());
 else
 {    matrielsportif *m= new matrielsportif(tab_com[i]->tab_comm[k]->getcodemat(),tab_com[i]->tab_comm[k]->getprix(),tab_com[i]->tab_comm[k]->getnbmat(),tab_com[i]->tab_comm[k]->gettypemat());
      tab_c.push_back(m);

}}}}

void Club::enregistrer_membres()
{
	fstream f;
	try{f.open("membres.txt",ios::in |ios::out |ios::trunc);
	for (unsigned int i=0;i<tab_mm.size();i++)
		f<<*tab_mm[i];
	f.close();
	}
	catch(exception e)
	{
		cerr<<e.what();
	}
}





void Club::lire_membres()
{
	fstream f;
	f.open("membres.txt",ios::in |ios::out |ios::app);
	while (!f.eof())
	{
		membre m;
		f>>m;
		m.saisirm();
		if (f.eof())break;
	}
	f.close();
}

void Club::enregistrer_equipe()
{   try{
	fstream f;
	f.open("equipes.txt",ios::in |ios::out |ios::trunc);
	for (unsigned int i=0;i<tab_eq.size();i++)
		f<<*tab_eq[i];
	f.close();
			}
	catch(exception e)
	{
		cerr<<e.what();
	}
}
void Club::lire_equipe()
{
	fstream f;
	f.open("equipes.txt",ios::in |ios::out |ios::app);
	while (!f.eof())
	{
		equipe m;
		f>>m;
		m.saisireq();
		if (f.eof())break;
	}
	f.close();
}






/*void Club::remplirinvite()
{
     char rep;
    do
    {

    cout<<"\n saisir  l'ensemble des invites du Club "<<endl;
    invite *inv=new invite;
     inv->saisiri();
    tab_inv.push_back(mat);
    cout<<"\n rajouter un autre invite? "<<endl;
    cin>>rep;
    }
while (rep=='o' || rep=='O');

}
}*/
