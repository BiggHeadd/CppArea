//
// Created by bighead on 2019/9/8.
//

#ifndef INC_1_PIZZA_H
#define INC_1_PIZZA_H

#include <string>

class Pizza {

private:
    std::string companyName; //pizza公司名
    float diam; //pizza直径
    float weight;
    void setCompanyName();
    void setDiam();
    void setWeight();

public:
    void setPizzaInfo();

    void printCompanyName();
    void printDiam();
    void printWeight();

    void printPizzaInfo();

};


#endif //INC_1_PIZZA_H
