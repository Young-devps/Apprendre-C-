#ifndef PRIVATEPUBLIC_H
#define PRIVATEPUBLIC_H


class PrivatePublic
{
    public:
        //certaines methode jug� non securis�
        PrivatePublic();
        virtual ~PrivatePublic();
        void setParaX(double x);

    protected:

    private:
        //tout les attributs et les m�thodes
        double x;
        double y;

};

#endif // PRIVATEPUBLIC_H
