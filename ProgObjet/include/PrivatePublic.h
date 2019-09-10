#ifndef PRIVATEPUBLIC_H
#define PRIVATEPUBLIC_H


class PrivatePublic
{
    public:
        //certaines methode jugé non securisé
        PrivatePublic();
        virtual ~PrivatePublic();
        void setParaX(double x);

    protected:

    private:
        //tout les attributs et les méthodes
        double x;
        double y;

};

#endif // PRIVATEPUBLIC_H
