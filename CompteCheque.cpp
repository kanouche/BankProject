#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>
#include <string>

#include "CompteCheque.h"

using namespace std;


CompteCheque::CompteCheque(double init,double nbr): Compte(init)
{
    
    fraisCharges=nbr;
}

bool CompteCheque::credit(double init)
{
    
    return Compte::credit(init);
}

bool CompteCheque::debit(double init)
{
    bool val= Compte::debit(init);
    if(val==true){
        solde-=fraisCharges;
        return true;
    }else{
        return false;
    }
}





