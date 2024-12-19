#include <iostream>
using namespace std;

class T{
private:
 static int cmp;
public:
    void call(){
        cout <<"call N :"<< cmp <<endl;
        cmp++;
    }
};

 int T :: cmp = 0 ;

 int main(){
    T A;
    for(int i=0 ; i<5 ; i++)
    A.call();
    return 0;
 }