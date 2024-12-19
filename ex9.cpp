#include <iostream>
using namespace std;

typedef struct element{
    int Nmbr;
    struct element *next;
}Element;

class Liste{
private:
  Element *tete ;
public:
 Liste(): tete(nullptr){ }
 ~Liste(){
    while (tete != nullptr){
        Supprimer();
    }
 }

 void Ajouter(int data){
    Element *newE = new(Element);
    newE->Nmbr = data;
    newE->next = tete;
    tete = newE;
 }

 void Supprimer(){
    if(tete == nullptr){
     cout << "Liste vide";
     return ;
    }
        Element *ptr = tete;
        tete = tete->next;
        delete ptr;
 }

 void Afficher(){
    if(tete == nullptr){
     cout << "Liste vide";
     return ;
    }
    Element *tmp = tete;
    while (tmp != nullptr){
        cout << tmp->Nmbr << " " ;
        tmp = tmp->next;
    }
    cout<< endl;
 }
};

int main(){
    Liste P;

    for(int i=0 ; i<10 ;i++)
    P.Ajouter(i*2);

    P.Afficher();

    P.Supprimer();
    P.Supprimer();
    P.Supprimer();

    cout << "appres suppression de 3 element premier : "<<endl;
    P.Afficher();
    
    return 0;
}
