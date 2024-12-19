#include <iostream>
using namespace std;

class Point{
private:
    int x, y;
    static int cmp1, cmpNew;

public:
    Point(int abs = 0, int ord = 0) : x(abs), y(ord){
        nmbrObj();
    }

    Point(int val , int ord , int al ) : x(val), y(val){
        nmbObjDyn();
    }

    static int nmbrObj();
    static int nmbObjDyn();
};

int Point ::cmp1 = 0;
int Point ::cmpNew = 0;

int Point ::nmbrObj(){
    cmp1++;
    return cmp1;
}

int Point ::nmbObjDyn(){
    cmpNew++;
    return cmpNew;
}

int main(){
    for(int i=0 ; i<5 ; i++)
    Point obje ;

    for(int i=0 ; i<3 ; i++)
    Point *obje = new Point(i , i*2 , 0);

    cout << "nmbr object dyn : "<< Point :: nmbObjDyn() << endl;
    cout << "nmbr object : "<< Point ::nmbrObj() << endl;
    
    return 0;
}
