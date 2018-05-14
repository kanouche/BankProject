#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>


using namespace std;
#include "Compte.h"
#include "CompteCheque.h"
#include "CompteEpargne.h"

int main() {
    vector<Compte*> vect;
    CompteCheque ct1(2500,5);
    vect.push_back(&ct1);
    CompteCheque ct2(1200,5);
    vect.push_back(&ct2);
    CompteEpargne ct3(3000,3.5);
    vect.push_back(&ct3);
    CompteEpargne ct4(500,3.5);
    vect.push_back(&ct4);
    
    cout<<"$$$$$$ Royal Bank is happy to treat you today $$$$$$"<<endl;
    cout<<"we will go through all your accounts"<<endl;
    string cpt;
    for(int i=0;i<vect.size();i++){
        if(i<2){
            cout<<"******** YOUR CHEQUE ACCOUNT **********"<<endl;
            cout<<"For a credit transaction enter 1 , for debit enter 2"<<endl;
            cin>>cpt;
            while(cpt!="1" && cpt!="2"){
                cout<<"invalid choice please try again !"<<endl;
                cout<<"For a credit transaction enter 1 , for debit enter 2"<<endl;
                cin>>cpt;
            }
            double tmp;
            if(cpt=="1"){
                cout<<"Please enter the ammount you want to deposit : "<<endl;
                cin>>tmp;
                if(vect[i]->credit(tmp)){
                    cout<< "Deposit of  "<<tmp <<" has been made succesfuly."<<endl;
                    cout<<"Your new balance is: "<<vect[i]->getBalance()<<endl;
                }else{
                    cout<<"You've entered a negative number , transaction cancelled !"<<endl;
                }
            }else{
                cout<<"Please enter the ammount you want to withdraw"<<endl;
                cin>>tmp;
                if(vect[i]->debit(tmp)){
                    cout<< "Withdraw of "<<tmp<<" has been succesful ."<<endl;
                    cout<<"your new balance is: "<<vect[i]->getBalance()<<endl;
                }
            }
        }else{
            cout<<"******** YOUR EPARGNE ACCOUNT **********"<<endl;
            double itrs=vect[i]->calculateInterest();
            cout<<"You've earned "<<itrs<<"$ as interest"<<endl;
            vect[i]->credit(itrs);
            cout<<"Your current balance is "<<vect[i]->getBalance()<<"$"<<endl;
            cout<<"For a credit transaction enter 1 , for debit enter 2"<<endl;
            cin>>cpt;
            while(cpt!="1" && cpt!="2"){
                cout<<"invalid choice please try again !"<<endl;
                cout<<"For a credit transaction enter 1 , for debit enter 2"<<endl;
                cin>>cpt;
            }
            double tmp;
            if(cpt=="1"){
                cout<<"Please enter the ammount you want to deposit : "<<endl;
                cin>>tmp;
                if(vect[i]->credit(tmp)){
                    cout<< "Deposit of  "<<tmp <<" has been made succesfuly ."<<endl;
                    cout<<"Your new balance is: "<<vect[i]->getBalance()<<endl;
                }else{
                    cout<<"You've entered a negative number , transaction cancelled !"<<endl;
                }
            }else{
                cout<<"Please enter the ammount you want to withdraw"<<endl;
                cin>>tmp;
                if(vect[i]->debit(tmp)){
                    cout<< "Withdraw of "<<tmp<<" has been succesful ."<<endl;
                    cout<<"your new balance is: "<<vect[i]->getBalance()<<endl;
                }
            }
        }
    }
    return 0;
}

