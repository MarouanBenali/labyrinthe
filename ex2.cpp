#include <iostream>
using namespace std;

class Animal{
protected:
    string nom;
    int age ;
public:
    void set_value(string nom , int age ){
        this->nom = nom;
        this->age = age;
    }
};

class Zebra : public Animal{
private:
  string info;
    
public:
  Zebra(string in): info(in){ }
  void affichage( ){
    cout << "le nom : " << nom << " l'age : " << age; 
    cout << " info splmentaire : "<< info << endl;
  }
};

class Dolphin : public Animal{
private:
  string info;
    
public:
  Dolphin(string in): info(in){ }
  void affichage( ){
    cout << "le nom : " << nom << " l'age : " << age; 
    cout << " info splmentaire : "<< info << endl;
  }
};

int main(){
    Zebra zibra("ikram benabdlouahab");
    zibra.set_value("zibra" , 23);

    Dolphin del("professi");
    del.set_value("Dolphine" , 32);

    zibra.affichage();
    del.affichage();
    return 0;
}

