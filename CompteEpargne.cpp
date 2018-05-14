#include <iostream>
#include <string>

using namespace std;

#include "CompteEpargne.h"
CompteEpargne::CompteEpargne(double s,double i):Compte(s)
{
    interest=i;
}
double CompteEpargne::calculateInterest()
{
    return (solde*interest)/100;
    
}

bool CompteEpargne:: credit(double m)
{
    return Compte::credit(m);
}
bool CompteEpargne::debit(double n)
{
    return Compte::debit(n);
}
//#endif /* COMPTEEPARGNE_H */

