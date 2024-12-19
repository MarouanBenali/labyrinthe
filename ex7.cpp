#include <iostream>
using namespace std;

typedef struct node{
    int age;
    struct node *next;
}Node;

class Pile{
private:
  Node *tete ;
public:
 Pile(): tete(nullptr){ }

 void push(int data){
    Node *newE = new(Node);
    newE->age = data;
    newE->next = tete;
    tete = newE;
 }

 void pop(){
    if(tete == nullptr)
     cout << "Pile vide";
    else{
        Node *ptr = tete;
        tete = tete->next;
        delete [] ptr;
    }
 }

 void Disply(){
    if(tete == nullptr)
     cout << "Pile vide";
    else{
        Node *tmp = tete;
        while (tmp != nullptr){
            cout << tmp->age << " " ;
            tmp = tmp->next;
        }
        cout<< endl;
    }
 }
};

int main(){
    Pile P;

    for(int i=0 ; i<10 ;i++)
    P.push(i*2);

    P.Disply();

    P.pop();

    P.Disply();
    
    return 0;
}
