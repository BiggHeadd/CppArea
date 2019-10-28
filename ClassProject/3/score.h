//
// Created by bighead on 2019/10/28.
//

#ifndef INC_3_SCORE_H
#define INC_3_SCORE_H

#include <cstring>
#include <iostream>
using namespace std;

class score
{
public:
    score()
    {
        studentID="";
        studentName="";
        grade=0;
        gradeFinal=0;
        gradeAvg=0;
    }
    score(string studentID_,
          string studentName_,
          double grade_,
          double gradeFinal_);
    string getStudentID(){return studentID;};
    string getStudentName(){return studentName;};
    double getGrade(){return grade;};
    double getGradeFinal(){return gradeFinal;};
    double getGradeAvg(){return gradeAvg;};
    double count();
    void ShowScore();
private:
    string studentID;
    string studentName;
    double grade;
    double gradeFinal;
    double gradeAvg;
};


#endif //INC_3_SCORE_H
