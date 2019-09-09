#include <iostream>
#include "Donor.h"
#include <vector>

int main() {

    //p163 8
    //逗号运算符括号内只取最后一个数，024代表八进制的数
    //无括号则取第一个
//    int x = (1, 024);
//    std::cout<<x<<std::endl; // x=024(八进制）
//
//    int y;
//    y = 1, 024;
//    std::cout<<y; // y=1

    //p163 9
    //cin>>ch,跳过空格、换行符、制表符。cin.get(ch) 和 ch = cin.get()可以读取这些字符

    //p201 6
    std::vector<Donor> foundation;
    std::vector<Donor> Grands, Patrons;
    int numbers;
    std::cout<<"Enter the numbers of foundation: ";
    std::cin>>numbers;

    for(int i=0; i<numbers; i++){
        Donor donor;
        donor.setDonor();
        foundation.push_back(donor);
        std::cout<<std::endl;
        if(donor.isVip()){
            Grands.push_back(donor);
        }else{
            Patrons.push_back(donor);
        }
    }

    std::cout<<"Grands"<<std::endl;
    if(!Grands.empty()){
        for(Donor donor: Grands){
            donor.printDonor();
        }
    }else{
        std::cout<<"none"<<std::endl;
    }

    std::cout<<"Patrons"<<std::endl;
    if(!Patrons.empty()){
        for(Donor donor: Patrons){
            donor.printDonor();
        }
    }else{
        std::cout<<"none"<<std::endl;
    }


    return 0;
}