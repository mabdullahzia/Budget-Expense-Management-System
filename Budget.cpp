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
    cout<<"Income source not found\n";
}

void Budget::addExpense(string c,float a){
    expenses.push_back(Expense(c,a));
}

void Budget::updateExpense(string c,float a){
    for(auto &e:expenses) if(e.getCategory()==c){e.setAmount(a);return;}
    cout<<"Expense category not found\n";
}

void Budget::removeExpense(string c){
    for(int i=0;i<expenses.size();i++){
        if(expenses[i].getCategory()==c){expenses.erase(expenses.begin()+i);return;}
    }
    cout<<"Expense category not found\n";
}

void Budget::displaySummary(){
    float totalIncome=0,totalExpense=0;
    for(auto &i:incomes) totalIncome+=i.getAmount();
    for(auto &e:expenses) totalExpense+=e.getAmount();
    cout<<fixed<<setprecision(2);
    cout<<"Total Income:"<<totalIncome<<"\n";
    cout<<"Total Expense:"<<totalExpense<<"\n";
    cout<<"Balance:"<<totalIncome-totalExpense<<"\n";
    checkBudget();
}

void Budget::displayCategorySummary(){
    cout<<"---Category-wise Expense Summary---\n";
    float total=0;
    for(auto &e:expenses) total+=e.getAmount();
    vector<string> cats={"Food","Travel","Bills","Education","Health","Misc"};
    for(string c:cats){
        float sum=0; int count=0;
        for(auto &e:expenses) if(e.getCategory()==c){sum+=e.getAmount();count++;}
        if(count>0) cout<<c<<" Total:"<<sum<<" Transactions:"<<count
                        <<" %:"<< (sum/total*100)<<"\n";
    }
}

void Budget::checkBudget(){
    float totalExpense=0;
    for(auto &e:expenses) totalExpense+=e.getAmount();
    if(monthlyGoal>0 && totalExpense>monthlyGoal)
        cout<<"Warning: You exceeded monthly budget by "<<totalExpense-monthlyGoal<<"\n";
}

void Budget::searchExpenses(string c){
    cout<<"---Search Results---\n";
    for(auto &e:expenses) if(e.getCategory()==c)
        cout<<"Category:"<<e.getCategory()<<" Amount:"<<e.getAmount()<<"\n";
}
