//
// Created by bighead on 2019/9/8.
//

#include "Achievement.h"
#include <iostream>

void Achievement::enterAchievement() {
    for(float & item : Achievement::runAchievement){
        std::cout<<"Enter 40m run achievement: ";
        std::cin>>item;
    }
}

void Achievement::calculateAvg() {
    float total = 0;
    Achievement::count = 0;
    for(float & item: Achievement::runAchievement){
        total += item;
        Achievement::count += 1;
    }
    Achievement::avg = total / (float)Achievement::count;
}

void Achievement::printAchievement() {
    Achievement::calculateAvg();
    std::cout<<"Run "<<Achievement::count<<" times"
            <<", And the avg achievement is: "<<Achievement::avg;
}