#ifndef SURCHOPERATEUR_H
#define SURCHOPERATEUR_H


/*la surchage des operateurs peut se passer soit a linterieur de la classe
soit a lexterieur de la classe
        complexe operator+(z1, z2);
        matrice operator+(matrice, matrice);
*/


class surchOperateur
{
    public:
        surchOperateur();
        virtual ~surchOperateur();
        static void methode1();// cette methode est une methode d'instance
        void methode2();
        static int compteur; // cette variable permet de comptabiliser tte les instance de la classe
        // il faut eviter la proliferation des static car cala casse l'approche objet et dencapsulation

        //soit a l'interieur de la classe
        //Complexe operator+(complexe);


    protected:

    private:
};

#endif // SURCHOPERATEUR_H
