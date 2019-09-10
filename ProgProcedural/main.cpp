#include <iostream>
using namespace std;
#include <cmath>
#include "branchementCond.cpp";


int main()
{
    //affichage de hello world
    cout << "hello world!" << endl;

    //les variables
    int n(4);
    int n_carre;
    double x(1.0); //que des decimaux
    int p(1), q(4);//declaration des variables sur une ligne
    n_carre = n * n;
    cout << "l'afffichage d'une variable" << n <<"." <<endl;

    //permutation de variable
    int a(1);
    int b(2);
    int temp(a);

    a=b;
    b=temp;

    //entre de donnee au clavier
    cout <<"Entrer un nombre";
    cin>>n;
    int k,j;
    cout<<'Entrer une valeur de'<<endl;
    cin>>k>>j;
    cout<<k<<j;

    //prise en compte de la notation scientifique
    n = 2e3;
    cout<<n;

    //formule gradian mathematique
    int angle_en_degre(60);
    double angle_en_radian(M_PI * angle_en_degre/180);



    return 0;
}
