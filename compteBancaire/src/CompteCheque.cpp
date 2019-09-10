#include "CompteCheque.h"

int CompteCheque:: nb_cc=0;

CompteCheque::CompteCheque(): Compte(){
    nb_cc++;
}

void CompteCheque::setMaxDecouvert(int md){
    maxDecouvert=md;
}

int CompteCheque::getNb_cc(){
    return nb_cc;
}
