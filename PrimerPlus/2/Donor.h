//
// Created by bighead on 2019/9/9.
//

#ifndef INC_2_DONOR_H
#define INC_2_DONOR_H

#include <string>

class Donor {

private:
    std::string name;
    double depositMoney;
    bool vip;

    void setName();
    void setDepositMoney();
    void setVip();

public:
    void setDonor();
    bool isVip();
    void printDonor();
};


#endif //INC_2_DONOR_H
