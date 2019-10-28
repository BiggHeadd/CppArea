#include <iostream>
#include "BankCount.h"
#include "Person.h"

void p10_1(){
    BankCount customer1("abc", "account", 100);
    customer1.Withdraw(10);
    customer1.Deposit(100);
    customer1.ShowBankCount();

    BankCount customer2;
    customer2.ShowBankCount();
}

void p10_2(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
//    cout<<endl;
    one.FormatShow();

    two.Show();
//    cout<<endl;
    two.FormatShow();

    three.Show();
//    cout<<endl;
    three.FormatShow();
}

int main() {
//    p10_1();
    p10_2();
    return 0;
}