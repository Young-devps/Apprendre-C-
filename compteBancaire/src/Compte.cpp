#include"Compte.h"

int Compte::nombre_compte=0;

Compte::Compte()
{
    solde=0;
    numero=nombre_compte;
    nombre_compte++;
}

void Compte::crediter(int montant){
    solde=solde+montant;
}

bool Compte::debiter(int montant){
    if(solde<montant)
        return false;
    else
    {
        solde=solde-montant;
        return true;
    }
}

int Compte::getSolde(){
    return solde;
}

int Compte::getNombre(){
    return nombre_compte;
}

Compte Compte::clone(){

    Compte c;
    c.solde=this->solde;
    c.numero=this->numero;

    return c;
}
