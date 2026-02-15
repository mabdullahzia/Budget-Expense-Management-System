#ifndef BUDGET_H
#define BUDGET_H
#include<string>
#include<vector>
using namespace std;

class Income{
public:
    float amount;
    Income(float a){amount=a;}
};

class Expense{
public:
    string category;
    float amount;
    Expense(string c,float a){category=c;amount=a;}
};

class Budget{
private:
    vector<Income> incomes;
    vector<Expense> expenses;
public:
    void addIncome(float a);
    void addExpense(string c,float a);
    void displaySummary();
};

#endif
