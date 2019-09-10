#ifndef CLIENT_H
#define CLIENT_H
#include "Compte.h"
#include "CompteCheque.h"
#include <iostream>
#include <vector>


using namespace std;

class Client
{
    public:
        Client();
        virtual ~Client();
        //Methods
        int ajoutClient(Compte c);



        //setters
        void setIndex(int i)
        {
            index = index + i;
        }
        void setNom(std::string newName)
        {
            nom = newName;
        }
        void setAdresse(std::string newAdress)
        {
            adresse = newAdress;
        }
        void setLibre(int newFree)
        {
            libre = newFree;
        }



        //getters
        int getIndex()
        {
            return index;
        }
        int getLibre()
        {
            return libre;
        }

    protected:

    private:
        std::string nom;
        std::string  adresse;
        int libre = 0;
        Compte**  tabCompte;
        tabCompte = new (Compte*)[25];
        static CompteCheque nouveauCompteCheque;
        int index = 0;

};

#endif // CLIENT_H
