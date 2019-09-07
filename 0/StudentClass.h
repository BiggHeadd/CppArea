//
// Created by bighead on 2019/9/7.
//

#ifndef INC_0_STUDENTCLASS_H
#define INC_0_STUDENTCLASS_H


class StudentClass {

private:
    char name[10];
    char sex[10];
    int birthday;

public:
    void setName();
    void setSex();
    void setBirthday();

    void printName();
    void printSex();
    void printBirthday();
};


#endif //INC_0_STUDENTCLASS_H
