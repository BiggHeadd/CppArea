#include <iostream>
#include "StudentClass.h"

// 1. C++程序的模块叫做函数
// 3. 使用 std 的命名空间
struct Student{
    char name[10];
    char sex[3];
    int birthday;
};

int main() {
    //4.
    std::cout << "Hello World" << std::endl;

    //5. 6. 7. 8.
//    int chesses;
//    std::cin >> chesses;
//    std::cout << "We have " << chesses << " variables of cheese";

    //option
    // struct
//    Student studenta, studentb;
//    std::cin >> studenta.name >> studenta.sex >> studenta.birthday;
//    std::cin >> studentb.name >> studentb.sex >> studentb.birthday;
//
//    std::cout << studenta.name << " " << studenta.sex << " " << studenta.birthday << std::endl;
//    std::cout << studentb.name << " " << studentb.sex << " " << studentb.birthday;

    // class
    StudentClass studenta, studentb;
    studenta.setName();
    studenta.setSex();
    studenta.setBirthday();

    studenta.printName();
    studenta.printSex();
    studenta.printBirthday();
    std::cout<<std::endl;

    studentb.setName();
    studentb.setSex();
    studentb.setBirthday();

    studentb.printName();
    studentb.printSex();
    studentb.printBirthday();

    return 0;
}