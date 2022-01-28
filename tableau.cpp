#include"tableau.h"
template<class T>
T tableau<T>::operator[](int i)
{

    return tab[i];
}
template<class T>
void tableau<T>::supprimer(T a)
{
    int res=rechercher(a);
    if(res!=-1)
    {
        for (int i=res ; i<nb-1;i++)
            tab[i]=tab[i+1];
        nb--;
    }
    else cout<<"\n L'element n'existe pas "<<endl;
}
template<class T>
void tableau<T>::ajouter(T a)
{
   if(nb<10 &&(rechercher(a)==-1))
   {
       tab[nb]=a;
       nb++;
   }
}
template<class T>
int tableau<T>::rechercher(T a)
{
   for(int i=0;i<nb;i++)
    if(tab[i]==a)
    return i;
   return -1;
}
template<class T>
tableau<T>::tableau(int n)
{
  nb=n;
}
template<class T>
istream& operator>> (istream& in , tableau<T>& t)

{
    cout<<"\n Remplissage"<<endl;
    for(int i=0;i<t.nb;i++)
        in>>t.tab[i];
    return in;


}
template<class T>
ostream& operator<<(ostream& out, tableau<T>& t)
{
  out<<"\n Nombre d'elements : "<<t.nb<<endl;
  for(int i=0;i<t.nb;i++)
  {
      out<<t.tab[i]<<" ";
      out<<endl;
  }
  return out;
}







