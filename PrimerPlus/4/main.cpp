#include <iostream>
#include <cstring>

struct stringy{
    char* str;
    int ct;
};

void set(stringy&, const char*);
void show(const stringy&, int=1);
void show(const char*, int=1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);

    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
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

