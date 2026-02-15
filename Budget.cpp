#include"Budget.h"
#include<iostream>
#include<iomanip>
using namespace std;

void Budget::addIncome(string s,float a){
    incomes.push_back(Income(s,a));
}

void Budget::updateIncome(string s,float a){
    for(auto &i:incomes) if(i.getSource()==s){i.setAmount(a);return;}
    cout<<"Income source not found\n";
}

void Budget::removeIncome(string s){
    for(int i=0;i<incomes.size();i++){
        if(incomes[i].getSource()==s){incomes.erase(incomes.begin()+i);return;}
    }
    cout<<"Income
