#include"istream"
#include"ostream"
using namespace std;
template <class T>
class tableau
{
    int nb;
    T tab[10];
public :
    tableau(int =1);
    int rechercher(T);
    void ajouter(T);
    void supprimer(T);
    T operator[](int);
    friend istream& operator>> (istream&, tableau<T>&);
    friend ostream& operator<< (ostream& , tableau<T>&);


};
