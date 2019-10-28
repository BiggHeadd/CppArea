//
// Created by bighead on 2019/10/13.
//

#ifndef INC_6_PERSON_H
#define INC_6_PERSON_H

#include <string>
#include <cstring>

using namespace std;

class Person {
private:
    static const int LIMIT=25;
    string lname;
    char fname[LIMIT];

public:
    Person(){lname=""; fname[0]='\0';};
    Person(const string& ln, const char * fn="Heyyou");
    void Show() const;
    void FormatShow() const;
};


#endif //INC_6_PERSON_H
