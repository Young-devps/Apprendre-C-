#include <iostream>
#include

using namespace std;

class Rectangle{

public :
    double longueur;
    double largeur;

    //le mot coonst place a la fin signifie que les argument ne peuvent etre modifier sinon om met pas
    double surface() const{
        return longueur*largeur;
    }

    double perimetre();
};

double Rectangle::perimetre(){
//methode externe de la classe Rectangle il suffit maitenant de mettre le prototype en haut
    return ((longueur+largeur)*2);
}


int main()
{

    cout << "Hello world!" << endl;

    Rectangle rect1;
    rect1.longueur = 5;
    rect1.largeur = 3;
    cout << "surface = " << rect1.surface() << endl;

    return 0;
}
