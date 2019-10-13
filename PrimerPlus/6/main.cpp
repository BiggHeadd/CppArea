#include <iostream>
#include "BankCount.h"

void p10_1(){
    BankCount customer1("abc", "account", 100);
    customer1.Withdraw(10);
    customer1.Deposit(100);
    customer1.ShowBankCount();

    BankCount customer2;
    customer2.ShowBankCount();
}


int main() {
//    p10_1();
    return 0;
}