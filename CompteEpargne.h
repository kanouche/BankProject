#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H


#include <iostream>
#include <stdio.h>
#include "Compte.h"

class CompteEpargne:public Compte
{
private:
    double interest;
public:
    CompteEpargne(double s,double i);
    double calculateInterest();
    bool credit(double);
    bool debit(double);
};

#endif /* COMPTEEPARGNE_H */



