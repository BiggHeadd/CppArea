//
// Created by bighead on 2019/9/8.
//

#include "Homework.h"
#include <iostream>

typedef std::pair<long, long> pLong;

pLong calculater(long seconds, long divide_value){
    long Integer = seconds / divide_value;
    seconds %= divide_value;

    return {Integer, seconds};
}

void Homework::seconds2DHMS() {
    // set the return value
    pLong return_value;

    // get user input
    std::cout<<"Please enter the seconds: ";
    std::cin>>Homework::seconds;

    // set temp seconds
    long temp = seconds;

    // calculate Day
    long seconds2day = 60*60*24;
    long days;
    return_value = calculater(temp, seconds2day);
    days = return_value.first; temp = return_value.second;

    // calculate Hours
    long seconds2hour = 60*60;
    long hours;
    return_value = calculater(temp, seconds2hour);
    hours = return_value.first; temp = return_value.second;

    // calculate minutes
    long seconds2minutes = 60;
    long minutes;
    return_value = calculater(temp, seconds2minutes);
    minutes = return_value.first; temp = return_value.second;

    // remain seconds
    long seconds_remain = temp;

    std::cout<<Homework::seconds<<" seconds = "
            <<days<<" days, "
            <<hours<<" hours, "
            <<minutes<<" minutes, "
            <<seconds_remain<<" seconds";
}