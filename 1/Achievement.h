//
// Created by bighead on 2019/9/8.
//

#ifndef INC_1_ACHIEVEMENT_H
#define INC_1_ACHIEVEMENT_H

#include <iostream>
#include <array>

class Achievement {

private:
    std::array<float, 3> runAchievement;
    float avg;
    int count;

public:
    void enterAchievement();
    void calculateAvg();
    void printAchievement();
};


#endif //INC_1_ACHIEVEMENT_H
