//
// Created by bighead on 2019/10/13.
//
#include <cstring>
#include <iostream>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
};

int setgolf(golf& g){
    std::cout<<"Please enter the name of the golfer: ";
    std::cin.getline(g.fullname, Len);
    if(strcmp(g.fullname, "")==0){
        return 0;
    }

    std::cout<<"Please enter the handicap of the golfer: ";
    std::cin>>g.handicap;
    std::cin.get();
    return 1;
}

void handicap(golf& g, int hc){
    g.handicap = hc;
}

void showgolf(const golf& g){
    std::cout<<"The golfer's name: "<<g.fullname<<std::endl;
    std::cout<<"The golfer's handicap: "<<g.handicap<<std::endl;
    std::cout<<std::endl;
}