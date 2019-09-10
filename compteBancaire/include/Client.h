#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
#include "Compte.h"
#include "CompteCheque.h"
#include "COmpteEpargne.h"
using namespace std;


class Client
{
    public:
        Client();
        Client(string n, string a);
        //virtual ~Client();
        bool ajoutCompte(Compte c);
        int soldeCumule();
        int nbreCe();
        int nbreCc();
        Client clone();
        string nom;
        string adresse;

    protected:

    private:
        int libre = 0;
        static CompteCheque nouveauCompte;
        Compte tabCompte[25] = {};
        //Compte tabCompte[];

};

#endif // CLIENT_H
