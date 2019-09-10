#ifndef COMPTE_H
#define COMPTE_H

class Compte{

    private:
        static int nombre_compte;
        int numero, solde;

    public:
        Compte();
        void crediter(int montant);
        bool debiter(int montant);
        int getSolde();
        static int getNombre();
        Compte clone();
};

#endif // COMPTE_H
