#include<iostream>
#include"Budget.h"
using namespace std;

int main(){
    Budget b; int choice;
    do{
        cout<<"1.AddIncome 2.AddExpense 3.Summary 0.Exit:";cin>>choice;
        switch(choice){
            case 1:{float a;cout<<"Amount:";cin>>a;b.addIncome(a);break;}
            case 2:{string c;float a;cin.ignore();cout<<"Category:";getline(cin,c);cout<<"Amount:";cin>>a;b.addExpense(c,a);break;}
            case 3:b.displaySummary();break;
        }
    }while(choice!=0);
}
