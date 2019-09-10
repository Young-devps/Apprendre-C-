#include <iostream>
using namespace std;
#include <vector>


/*

//pointeur par refference
int val(1);
int& x(val); //c'est juste une nouvelle ettiquette sur une variable

int i(3);
const int& j(i); //je ne peut pas modifier j et xa modifie i car const mais je peux modifier i et ca modifie j
int& ri; //NON car on a pas le doit de declarer quelque choose qui ne reference rien

int i;
int& ri(i);
int j(2);
ri = j;//Non on ne peux pas deplcer une reference vers une autre reference par contre cest j qui serra deplacer ver ri et par consequent aussi i

int i(3);
int& ri(i);
int& rri(ri); //Non car on ne reference pas un reference d'une reference, car on ne peut pas faire un tableau de references
int&& rri(ri);//Non plus




//Vrai pointeur
//pointeur est une variable qui contient l'adresse d'un autre objet qui existe en memoire et plus une ettiquette
//declaration de pointeur type* identificateur(adresse);
int* ptr(nullptr);  //pointeur sur adresse nul
int* ptr(&i);
int* ptr(new int(33));  //initialise mon pointeur au moyen d'une zone alloué dynamiquement
//operateur de pointeur
//& retourne l'adresse memoire de la variable, * retourne la valeur pointee par une variable pointee ie returne le nombr de la var pointe car ce kel contient c l'adresse de la var pointe
int& id // reference juste, cree une etique sur la meme reference
&id contient l'adresse de la variable

int* id//contient l'adresse de la var pointee
*id contient la valeur de l'adresse pointee


//Allocation Dynamique
int vi == allocation statique;
//operateur new alloue et delete libere
int* pointeur;
pointeur = new type;    //reserve un zone memoire de type et met l'adresse correspondante dans le pointeur
pointeur = new int(valeur); //initialiser directement avec valeur
//Supprimer une Allocation Dynamique
 delete ptr;
 ptr = nullptr;

int* px;
*px = 20; //erreur car un emplacement memoire n'a paas ete alloué



//Pointeur Intelligent c++11
#include <memory>
//unique_ptr pointe sur une zone memoire n'ayant qu'un seul pointeur
unique_ptr<int> p2(new int(3));
unique_ptr<int> p1(p2);//impossible car pas deux pointeur sur
ptr.reset() // libere automatiquement tt






*/
