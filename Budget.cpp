#include"Budget.h"
#include<iostream>
using namespace std;

void Budget::addIncome(float a){incomes.push_back(Income(a));}
void Budget::addExpense(string c,float a){expenses.push_back(Expense(c,a));}

void Budget::displaySummary(){
    float totalIncome=0,totalExpense=0;
    for(auto &i:incomes) totalIncome+=i.amount;
    for(auto &e:expenses) totalExpense+=e.amount;
    cout<<"Income:"<<totalIncome<<" Expense:"<<totalExpense
        <<" Balance:"<<totalIncome-totalExpense<<"\n";
}
