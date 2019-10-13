//
// Created by bighead on 2019/10/13.
//

#ifndef INC_5_GOLF_H
#define INC_5_GOLF_H

const int Len = 40;
struct golf{
    char fullname[Len];
    int handicap;
};

void setgolf(golf& g, const char* name, int hc);

int setgolf(golf& g);

void handicap(golf& g, int hc);

void showgolf(const golf& g);



#endif //INC_5_GOLF_H
