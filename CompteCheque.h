#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>
#include <vector>
#include <string>

#ifndef COMPTECHEQUE_H
#define COMPTECHEQUE_H



#include "Compte.h"

using namespace std;

class CompteCheque: public Compte
{
    protected :
    
    public :
    double fraisCharges;
    CompteCheque(double init,double nbr);
    bool credit(double);
    bool debit(double);
    
};


#endif /* COMPTECHEQUE_H */
