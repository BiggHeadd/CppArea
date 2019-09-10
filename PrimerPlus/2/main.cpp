#include <iostream>
#include "Donor.h"
#include <vector>
#include <string>
#include <cctype>
#include <fstream>

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
//    std::vector<Donor> foundation;
//    std::vector<Donor> Grands, Patrons;
//    int numbers;
//    std::cout<<"Enter the numbers of foundation: ";
//    std::cin>>numbers;
//
//    for(int i=0; i<numbers; i++){
//        Donor donor;
//        donor.setDonor();
//        foundation.push_back(donor);
//        std::cout<<std::endl;
//        if(donor.isVip()){
//            Grands.push_back(donor);
//        }else{
//            Patrons.push_back(donor);
//        }
//    }
//
//    std::cout<<"Grands"<<std::endl;
//    if(!Grands.empty()){
//        for(Donor donor: Grands){
//            donor.printDonor();
//        }
//    }else{
//        std::cout<<"none"<<std::endl;
//    }
//
//    std::cout<<"Patrons"<<std::endl;
//    if(!Patrons.empty()){
//        for(Donor donor: Patrons){
//            donor.printDonor();
//        }
//    }else{
//        std::cout<<"none"<<std::endl;
//    }

    //p201 7
//    std::string input;
//    std::vector<std::string> inputs;
//    int countVowels=0;
//    int countConsonants=0;
//    int others = 0;
//    do{
//        std::cin>>input;
//        if(isalpha(input[0])){
//            if(input[0]=='a' or input[0]=='e' or input[0]=='i' or input[0]=='o' or input[0]=='u' or
//                    input[0]=='A' or input[0]=='E' or input[0]=='I' or input[0]=='O' or input[0]=='U'){
//                countVowels++;
//            }else{
//                countConsonants++;
//            }
//        }else{
//            others++;
//        }
//    }while(input!="q");
//
//    std::cout<<countVowels<<" words beginning with Vowels"<<std::endl;
//    std::cout<<countConsonants-1<<" words beginning with Consonants"<<std::endl;
//    std::cout<<others<<" others"<<std::endl;



    std::ifstream in;
    // /home/bighead/CLionProjects/CppArea/PrimerPlus/2/text.txt
    in.open("../text");
    if(in.is_open()){
        std::cout<<"open"<<std::endl;
    }
    char c;
    while(!in.eof()){
        in>>c;
        std::cout<<c<<std::endl;
    }
    in.close();
    return 0;
}