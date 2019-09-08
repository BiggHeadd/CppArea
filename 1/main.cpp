#include <iostream>
#include "Homework.h"
#include <string>
#include "Pizza.h"
#include "Achievement.h"

struct CandyBar{
    std::string candyName;
    float candyWeight;
    int candyCarlorie;
};

int main() {
    // p69 4
    //Homework* homework = new Homework;
    //homework->seconds2DHMS();

    // p124 5
    //CandyBar candyBar = {"Mocha Munch", 2.3, 350};
    //std::cout<<"--Candy Bar Info--"<<std::endl;
    //std::cout<<"Candy Name: " << candyBar.candyName << std::endl
    //        <<"Candy Weight: " << candyBar.candyWeight << std::endl
    //        <<"Candy Carlorie: " << candyBar.candyCarlorie;

    // p124 7
    //Pizza* pizza = new Pizza;
    //pizza->setPizzaInfo();
    //pizza->printPizzaInfo();

    // p124 10
    Achievement* achievement = new Achievement;
    achievement->enterAchievement();
    achievement->printAchievement();

    return 0;
}