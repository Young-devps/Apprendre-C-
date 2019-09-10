#include "Client.h"
#include <iostream>



Client::Client()
{
    Compte tabCompte[25] = {};
    libre = 0;
}

Client::Client(string n, string a)
{
    nom = n;
    adresse = a;
    libre = 0;
}


bool Client::ajoutCompte(Compte c)
{
    if(libre >= 25) return false;
    tabCompte[libre] = c;
    libre++;
    return true;
}


int Client::soldeCumule()
{
    int x = 0;
    for (int i=0; i<libre; i++)
        x = x + tabCompte[i].getSolde();
    return x;
}

int Client::nbreCe()
{
    Compte test;
    int nce = 0;
    for (int i = 0; i < libre; i++)
        if ( typedef(tabCompte[i]) == typedef(test) )
        {
            nce++;
        }
    return nce;
}


Client Client::clone()
{
    Client clientClone;
    clientClone.nom = this->nom;
    clientClone.adresse = this->adresse;
    return clientClone;
}
