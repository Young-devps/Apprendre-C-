#include "COmpteEpargne.h"

int COmpteEpargne::nb_ce=0;
float COmpteEpargne::tauxInteret=1;

COmpteEpargne::COmpteEpargne():Compte(){
    nb_ce++;
}

void COmpteEpargne::ajout_interet(){

    float montant;

    montant=this->getSolde()*tauxInteret;
    this->crediter((int)montant);
}

float COmpteEpargne::getTauxInteret(){

    return tauxInteret;
}

int COmpteEpargne::getnb_ce(){

    return nb_ce;
}
