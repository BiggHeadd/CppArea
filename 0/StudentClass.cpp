//
// Created by bighead on 2019/9/7.
//

#include "StudentClass.h"
#include <iostream>

void StudentClass::setName() {
    std::cout << "Enter the name(char): ";
    std::cin >> StudentClass::name;
}

void StudentClass::setSex() {
    std::cout << "Enter the sex(char): ";
    std::cin >> StudentClass::sex;
}

void StudentClass::setBirthday() {
    std::cout << "Enter the birthday(int): ";
    std::cin >> StudentClass::birthday;
}

void StudentClass::printBirthday() {
    std::cout << "Birthday: " << StudentClass::birthday << " ";
}

void StudentClass::printName() {
    std::cout << "Name: " << StudentClass::name << " ";
}

void StudentClass::printSex() {
    std::cout << "Sex: " << StudentClass::sex << " ";
}