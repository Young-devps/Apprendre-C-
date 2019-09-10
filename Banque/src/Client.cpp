#include "Client.h"

Client::Client()
{
    //ctor
    tabCompte[getIndex()] = new Compte;
    setIndex(getIndex()+1);
}

Client::ajoutClient(Compte c)
{
    if(getLibre() >= 25) return false;
    int var = getLibre();
    tabCompte[var] = c;
    setLibre(getIndex()+1);
    return true;
}


Client::~Client()
{
    //dtor
    delete tabCompte;
}
