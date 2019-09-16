#include <iostream>

double pam(int);
double *pf(int);
double (*pf2)(int);

double pam(int a){
    std::cout<<"pam\ta: "<<a<<std::endl;
    return 1.0;
};

double *pf(int a){
    std::cout<<"*pf\ta: "<<a<<std::endl;
    return reinterpret_cast<double *>(a);
}

void estimate(double (*pf)(int)){
    (*pf)(1);
}

void estimate(double *(*pf)(int)){
    (*pf)(1);
}

int main() {
    estimate(pam);
    estimate(pf);
    return 0;
}