//
// Created by bighead on 2019/10/13.
//

#include "BankCount.h"

BankCount::BankCount(string name, string account, double money) {
    this->name = name;
    this->account = account;
    this->money = money;
}

BankCount::BankCount() {
    this->name = "EMPTY";
    this->account = "EMPTY";
    this->money = 0.0;
}

void BankCount::ShowBankCount() {
    cout << "BankCount name: " << name << endl;
    cout << "BankCount number: " << account << endl;
    cout << "BankCount balance: " << money << endl;
}

int BankCount::Deposit(double deposit) {
    this->money += deposit;
    return 1;
}

int BankCount::Withdraw(double money) {
    this->money -= money;
}