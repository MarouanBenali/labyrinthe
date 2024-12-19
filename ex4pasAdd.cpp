#include <iostream>
#include <cmath>
using namespace std;

class Vectur3D{
private:
  int X, Y ,Z;
    
public:
    Vectur3D(int x=0 , int y=0 , int z=0): X(x) , Y(y) ,Z(z) { }
    void afficher(const char* vect){
        cout << vect <<"( " << X << "," << Y << "," <<Z <<")" << endl;
    }

    Vectur3D operator + (Vectur3D* autre){
        int x = X + autre->X ;
        int y = Y + autre->Y ;
        return Vectur3D(x,y);
    }

    int ProdSc(Vectur3D* autre){
        return (X*autre->X + Y*autre->Y + Z*autre->Z) ;  
    }

    bool coincide(Vectur3D* autre){
        return (X==autre->X && Y == autre->Y && Z == autre->Z);
    }
    
    float norme ( ){
        return sqrt(X*X + Y*Y + Z*Z);
    }

    friend Vectur3D Normx(Vectur3D* , Vectur3D*);
};

  Vectur3D Normx(Vectur3D* VECT1 , Vectur3D* VECT2){
    float norme1 = VECT1->norme();
    float norme2 = VECT2->norme();
    return (norme1 > norme2)? *VECT1 : *VECT2 ; 
  }

  int main(){
    Vectur3D V1(2,3,5) , V2(2,4,6) , V3 , V4;
    V1.afficher("V1");
    V2.afficher("V2");
    V3 = V1 + &V2;
    V3.afficher("V1 + V2 ");

    if(V1.coincide(&V2)){
        cout<< "V1 == V2";
    }

    cout << "V1xV2 = " << V1.ProdSc(&V2) << endl;

    V4 = Normx(&V1,&V2);
    cout << "la plus grande norme de vect : ";
    V4.afficher("V");
    return 0;
  }
