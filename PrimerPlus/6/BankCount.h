//
// Created by bighead on 2019/10/13.
//

#ifndef INC_6_BANKCOUNT_H
#define INC_6_BANKCOUNT_H

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class BankCount{
private:
    string name;
    string account;
    double money;

public:
    BankCount();
    BankCount(string name, string account, double money);
    void ShowBankCount();
    int Deposit(double deposit);
    int Withdraw(double money);
};

#endif //INC_6_BANKCOUNT_H
