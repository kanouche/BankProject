#include <iostream>
#include <string>
using namespace std;

#include "Compte.h"

#include <exception>
#include <stdexcept>


Compte::Compte(double s)
{
    if(s>=0){
        solde=s;
    }   else{
        solde=0.0;
        cout<<"ERROR: le solde initial était invalide"<<endl;
    }
    
}
bool Compte::credit(double m)
{
    if (m<0)
        return false;
    solde+=m;
    return true;
}
bool Compte::debit(double n)
{
    if(n>solde){
        cout<<"Debit amount exceeded account balance"<<endl;
        return false;
    }else{
        solde=solde-n;
        return true;
    }
}
double Compte::calculateInterest(){
    return 0;
}
double Compte::getBalance()
{
    return solde;
}



