#include <iostream>
#include <cstring>

struct stringy{
    char* str;
    int ct;
};

void set(stringy&, const char*);
void show(const stringy&, int=1);
void show(const char*, int=1);

template <class T>T max(T *a){
    T temp = a[0];
    for(int i=0; i<5; i++){
        if(temp < a[i]){
            temp = a[i];
        }
    }
    return temp;
}

int main() {
    // p299 4
//    stringy beany;
//    char testing[] = "Reality isn't what it used to be.";
//    set(beany, testing);
//
//    show(beany);
//    show(beany, 2);
//
//    testing[0] = 'D';
//    testing[1] = 'u';
//    show(testing);
//    show(testing, 3);

    // 299 5
    int a[5] = {1, 2, 3, 4, 5};
    double b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    int a_max = max(a);
    double b_max = max(b);
    std::cout<<"int a_max: "<<a_max<<" double b_max"<<b_max;

    return 0;
}

void set(stringy& beany, const char* input){
    beany.ct = strlen(input);
    beany.str = new char[beany.ct];
    strcpy(beany.str, input);
}

void show(const stringy& a, int b){
    for(int i=0; i<b; i++){
        std::cout<<a.str<<std::endl;
    }
}

void show(const char* a, int b){
    for(int i=0; i<b; i++){
        std::cout<<a<<std::endl;
    }
}

