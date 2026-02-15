#include<iostream>
#include"Budget.h"
using namespace std;
#include"Budget.cpp"

int main(){
    Budget b;
    int choice;
    do{
        cout<<"1.Add Income 2.Update Income 3.Remove Income\n";
        cout<<"4.Add Expense 5.Update Expense 6.Remove Expense\n";
        cout<<"7.Summary 8.Category Summary 9.Set Budget 10.Search Expense 0.Exit:";
        cin>>choice;
        string s,c; float a;
        switch(choice){
            case 1: cin.ignore(); cout<<"Source:";getline(cin,s);cout<<"Amount:";cin>>a;b.addIncome(s,a);break;
            case 2: cin.ignore(); cout<<"Source:";getline(cin,s);cout<<"New Amount:";cin>>a;b.updateIncome(s,a);break;
            case 3: cin.ignore(); cout<<"Source:";getline(cin,s);b.removeIncome(s);break;
            case 4: cin.ignore(); cout<<"Category:";getline(cin,c);cout<<"Amount:";cin>>a;b.addExpense(c,a);break;
            case 5: cin.ignore(); cout<<"Category:";getline(cin,c);cout<<"New Amount:";cin>>a;b.updateExpense(c,a);break;
            case 6: cin.ignore(); cout<<"Category:";getline(cin,c);b.removeExpense(c);break;
            case 7: b.displaySummary();break;
            case 8: b.displayCategorySummary();break;
            case 9: cout<<"Set Monthly Budget:";cin>>a;b.setMonthlyGoal(a);break;
            case 10: cin.ignore(); cout<<"Category to search:";getline(cin,c);b.searchExpenses(c);break;
        }
    }while(choice!=0);
}
