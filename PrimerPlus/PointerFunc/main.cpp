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
    // 函数指针
    estimate(pam);
    estimate(pf);

    // 引用变量
    int rate = 3;
    int& rate_ = rate;

    std::cout<<"rate: "<<rate<<std::endl;
    std::cout<<"rate_: "<<rate_<<std::endl<<std::endl;

    rate++;

    std::cout<<"rate: "<<rate<<std::endl;
    std::cout<<"rate_: "<<rate_<<std::endl<<std::endl;

    std::cout<<"address rate: "<<&rate<<std::endl;
    std::cout<<"address rate_: "<<&rate_<<std::endl;

    return 0;
}