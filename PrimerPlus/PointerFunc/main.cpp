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

struct free_throws{
    std::string name;
    int made{};
    int miss{};
    float percent{};
};

void set_ft(free_throws& ft){
    std::cout<<"Please enter name: ";
    std::cin>>ft.name;
    std::cout<<"made: ";
    std::cin>>ft.made;
    std::cout<<"missed: ";
    std::cin>>ft.miss;

    ft.percent = ft.made/((ft.made+ft.miss)*1.0);
}

void print_ft(const free_throws& ft){
    std::cout<<"name: "<<ft.name<<std::endl;
    std::cout<<"made: "<<ft.made<<std::endl;
    std::cout<<"miss: "<<ft.miss<<std::endl;
    std::cout<<"percent: "<<ft.percent<<std::endl;
}

int main() {
    // 函数指针
//    estimate(pam);
//    estimate(pf);

    // 引用变量
//    int rate = 3;
//    int& rate_ = rate;
//
//    std::cout<<"rate: "<<rate<<std::endl;
//    std::cout<<"rate_: "<<rate_<<std::endl<<std::endl;
//
//    rate++;
//
//    std::cout<<"rate: "<<rate<<std::endl;
//    std::cout<<"rate_: "<<rate_<<std::endl<<std::endl;
//
//    std::cout<<"address rate: "<<&rate<<std::endl;
//    std::cout<<"address rate_: "<<&rate_<<std::endl;

    // 结构体引用
    std::cout<<"set up free throw struct"<<std::endl;
    free_throws ft;
    set_ft(ft);
    print_ft(ft);

    return 0;
}