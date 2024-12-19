#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class Fichier{
private:
   int *p;
   int lng;
public:
Fichier(int L): lng(L), p(nullptr){ }
void Creation(){
    p = new int[lng]; 
}

void Remplissage(){
    srand(static_cast<unsigned int>(time(0)));
    for(int i=0 ; i<lng ; i++){
        *(p+i) = rand()%2 + 1;
    }
}

void afficher( ){
    int i=0;
    while (p+i != nullptr){
        cout<< *p << " "; 
    }
}
~Fichier(){
    delete[] p ;
}

};

int main(){
 int lng;
 cout<<"donner la lngeure de fichier";
 cin >> lng ;
 Fichier *fichier = new Fichier(lng);
 fichier->Creation();
 fichier->Remplissage();
 fichier->afficher();
 fichier->~Fichier();
  return 0;
}