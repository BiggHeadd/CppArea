//
// Created by bighead on 2019/10/13.
//

#include "Person.h"
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::Show() const {
    cout<<Person::fname<<" "<<Person::lname<<endl;
}

void Person::FormatShow() const {
    cout<<Person::lname<<" "<<Person::fname<<endl;
}