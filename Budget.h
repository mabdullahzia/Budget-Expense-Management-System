#ifndef BUDGET_H
#define BUDGET_H
#include<string>
#include<vector>
using namespace std;

class Income{
private:
    string source;
    float amount;
public:
    Income(string s,float a){source=s;amount=a;}
    string getSource(){return source;}
    float getAmount(){return amount;}
    void setAmount(float a){amount=a;}
};

class Expense{
private:
    string category;
    float amount;
public:
    Expense(string c,float a){category=c;amount=a;}
    string getCategory(){return category;}
    float getAmount(){return amount;}
    void setAmount(float a){amount=a;}
};

class Budget{
private:
    vector<Income> incomes;
    vector<Expense> expenses;
    float monthlyGoal;
public:
    Budget(){monthlyGoal=0;}
    void addIncome(string s,float a);
    void updateIncome(string s,float a);
    void removeIncome(string s);
    void addExpense(string c,float a);
    void updateExpense(string c,float a);
    void removeExpense(string c);
    void displaySummary();
    void displayCategorySummary();
    void setMonthlyGoal(float g){monthlyGoal=g;}
    void checkBudget();
    void searchExpenses(string c);
};

#endif
