#ifndef COMPLEXE_H
#define COMPLEXE_H

/*
Les differentes facons de mettre les surchageur en externe
* z3 = operator+(z1, z2);
* const  Complexe operator+(Complexe const&, Complexe const&) //complexe pour eviter les copiepar valeur
* const Complexeoperator+(Complexe , Complexe const&); //juste le deuxiemme qui prend le const
*/


/*
    cette methode de friendship peut acceder aux parties privée de Complexe sans appartenir a Complexe
    friend const ostream& Operator<<(ostream& out, Complexe Z1){

    }
*/
class Complexe
{
    public:
        Complexe();
        virtual ~Complexe();
        double get_X const();
        double get_Y const();
        const Complexe+(Complexe z1, Complexe const& z2)
        // friend ostream& operator<<(ostream& out, Complexe& Z1);
    protected:

    private:
        double x;
        double y;
};


const Complexeoperator+(Complexe z1, Complexe const& z2){
    Complexe z3(z1.get_X() + z2.get_X(), z1.get_Y() + z2.get_Y());
    return z3;
}
#endif // COMPLEXE_H
