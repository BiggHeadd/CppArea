//
// Created by bighead on 2019/9/8.
//

#include "Pizza.h"
#include <iostream>

void Pizza::setCompanyName() {
    std::cout<<"Enter the Pizza Company Name: ";
    std::cin>>Pizza::companyName;
}

void Pizza::setDiam() {
    std::cout<<"Enter the Pizza Diam: ";
    std::cin>>Pizza::diam;
}

void Pizza::setWeight() {
    std::cout<<"Enter the Pizza Weight: ";
    std::cin>>Pizza::weight;
}

void Pizza::setPizzaInfo() {
    Pizza::setCompanyName();
    Pizza::setDiam();
    Pizza::setWeight();
}

void Pizza::printCompanyName() {
    std::cout<<"Pizza Company: "<<Pizza::companyName<<std::endl;
}

void Pizza::printDiam() {
    std::cout<<"Pizza Diam: "<<Pizza::diam<<std::endl;
}

void Pizza::printWeight() {
    std::cout<<"Pizza Weight: "<<Pizza::weight<<std::endl;
}

void Pizza::printPizzaInfo() {
    Pizza::printCompanyName();
    Pizza::printDiam();
    Pizza::printWeight();
}