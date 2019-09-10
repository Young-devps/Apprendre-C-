#ifndef COMPTECHEQUE_H
#define COMPTECHEQUE_H
#include"Compte.h"


class CompteCheque: public Compte
{
    private:
        static int nb_cc;
        int maxDecouvert;
    public:
        CompteCheque();
        void setMaxDecouvert(int md);
        static int getNb_cc();

};

#endif // COMPTECHEQUE_H
