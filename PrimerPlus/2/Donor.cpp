//
// Created by bighead on 2019/9/9.
//

#include "Donor.h"
#include <iostream>

void Donor::setName() {
    std::cout<<"Please Enter Donor's Name: ";
    std::cin>>Donor::name;
}

void Donor::setDepositMoney() {
    std::cout<<"Please Enter Donor's deposit money: ";
    std::cin>>Donor::depositMoney;
}

void Donor::setVip() {
    Donor::vip = Donor::depositMoney > 10000;
}

void Donor::setDonor() {
    Donor::setName();
    Donor::setDepositMoney();
    Donor::setVip();
}

bool Donor::isVip() {
    return Donor::vip;
}

void Donor::printDonor() {
    std::cout<<Donor::name<<" "<<Donor::depositMoney<<std::endl;
}