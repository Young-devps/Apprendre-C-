#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include"Compte.h"


class COmpteEpargne: public Compte
{
    public:
        COmpteEpargne();
        static float getTauxInteret();
        void ajout_interet();
        static int getnb_ce();


    private:
        static int nb_ce;
         static float tauxInteret;

};

#endif // COMPTEEPARGNE_H
