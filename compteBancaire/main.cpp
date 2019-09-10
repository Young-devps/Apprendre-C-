#include <iostream>
#include <string>
#include"Compte.h"
#include"CompteCheque.h"
#include"COmpteEpargne.h"

using namespace std;

int main()
{
    Compte c;

    c.crediter(1000);
    cout<<c.getSolde()<<endl;

    Compte c1;
    c1=c.clone();
    c.debiter(500);

    cout<<c1.getSolde()<<endl<<c.getSolde();

    return 0;
}
