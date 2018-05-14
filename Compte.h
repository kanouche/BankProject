#include <iostream>
#include <string>
#ifndef COMPTE_H
#define COMPTE_H
using namespace std;



class Compte

{public:
    Compte(double s);
    virtual bool credit(double m);
    virtual bool debit(double n);
    virtual double calculateInterest();
    virtual double getBalance();
    
protected:
    
    double solde;
    
};
#endif


