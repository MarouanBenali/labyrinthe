#include <iostream>
using namespace std;

class NbComplex{
    private : 
    int re;
    int img;

    public :
    NbComplex(int r , int i): re(r) , img(i){ }
    NbComplex operator+ (NbComplex &autre){
        int Re = re + autre.re ;
        int Im = img + autre.img ;
        return NbComplex(Re , Im);
    }

    NbComplex operator- (NbComplex &autre){
        int Re = re - autre.re ;
        int Im = img - autre.img ;
        return NbComplex(Re , Im);
    }

    bool operator== (NbComplex &autre){
       return (re == autre.re && img == autre.img);
    }

    NbComplex operator* (NbComplex &autre){
        int Re = re*autre.re - img*autre.img ;
        int Im = re*autre.img + img*autre.re ;
        return NbComplex(Re , Im);
    }

    NbComplex operator/ (NbComplex &autre){
        int dom = autre.re*autre.re + autre.img*autre.img;
        int numRe = re*autre.re - img*autre.img ;
        int numIm = re*autre.img + img*autre.re ;
        return NbComplex(numRe/dom , numIm/dom);
    }

    void Afficher( ){
        if(img>0 && re != 0)
        cout <<"Z = " << re << " + " << img <<"i" ;
        if(img>0 && re==0)
        cout <<"Z = " << img << "i" ;
        if(img<0){
        cout <<"Z = " << re << " " << img <<"i" ;
        if(img<0 && re==0){
        cout <<"Z = " << img <<"i" ;
    }

    int choix( ){
        cout << "Choisir une operation entre deux complex :"<<endl;
        cout << " 1- égalité, addition, soustraction, multiplication division"
        cout << " 2- "
        cout << " 3- "
        cout << " 4- "
        cout << " 5- "
    }

};

int main(){
    return 0;
}