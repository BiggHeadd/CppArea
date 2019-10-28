//
// Created by bighead on 2019/10/28.
//

#include "score.h"

double score::count() {
    return grade*0.4+gradeFinal*0.6;
}

void score::ShowScore() {
    cout<<getStudentID()<<" "
        <<getStudentName()<<" "
        <<getGrade()<<" "
        <<getGradeFinal()<<" "
        <<getGradeAvg()<<endl;
}

score::score(string studentID_,
             string studentName_,
             double grade_,
             double gradeFinal_)
{
    studentID=studentID_;
    studentName=studentName_;
    grade=grade_;
    gradeFinal=gradeFinal_;
    gradeAvg=count();
}