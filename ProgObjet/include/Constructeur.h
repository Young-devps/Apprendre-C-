#ifndef CONSTRUCTEUR_H
#define CONSTRUCTEUR_H


class Constructeur
{


    public:
        //constructeur sans type de retour
        //on peut avoir plusieiur constructeur surchagé avec des var differents
        Constructeur(double var)
        : hauteur(var), largeur(var) //liste d'initialisaton
        {
            /** erreur_a_ne_pas_faire
             *carre
             *hauteur = var;
             *largeur = var;
             *
             */

        }
        virtual ~Constructeur();

    protected:

    private:
        double hauteur;
        double largeur;
};

#endif // CONSTRUCTEUR_H
