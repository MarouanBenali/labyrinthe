#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

class Traitment{
 private:
   vector <int> Vect;
 public:
  void Initialise (){
    int var ;
    cout << "donner une nmbr paire diferent de 0 : " <<endl ;
    for(int i=0 ; i<15 ; i++){
       do{
        cout << "element "<< i+1 << " : ";
        cin >> var;
       }while(var == 0 || var%2 != 0);
       Vect.push_back(var);
    }
  }

  void show(int i){
    if(i==14){
        cout << Vect[14];
    }
    else{
        cout << " " << Vect[i];
        show(i+1);
    }
  }

  vector<int> get_Vect(){
    return Vect;
  }

  void Afficher(vector<int>::iterator ptr){
    if(ptr == Vect.end()){
        return ;
    }else{
        cout << *ptr ;
        Afficher(ptr+1); 
    }
  }

  friend double Moyenne(Traitment);
  friend double Median(Traitment); 
};
  double Moyenne(Traitment T){
    double som = 0;
    vector<int>::iterator ptr;
    for(ptr =T.Vect.begin() ; ptr < T.Vect.end() ; ptr++){
        som += *ptr;
    }
    return som/15 ; 
  }

  double Median(Traitment T){
    int M = (15+1)/2;
    return T.Vect[M];
  }

int main(){
    Traitment OB ;
    OB.Initialise();
    OB.show(0);
    cout << endl ;
    // OB.Afficher(OB.get_Vect().begin());

    cout << "le moyenne est : " << Moyenne(OB) << endl;
    cout << "le midian : " << Median(OB) << endl;
    return 0;
}