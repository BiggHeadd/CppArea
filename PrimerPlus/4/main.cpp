#include <iostream>
#include <cstring>

struct stringy{
    char* str;
    int ct;
};

void set(stringy&, const char*);
void show(const stringy&, int=1);
void show(const char*, int=1);

template <class T>T max5(T *a){
    T temp = a[0];
    for(int i=0; i<5; i++){
        if(temp < a[i]){
            temp = a[i];
        }
    }
    return temp;
}

template <typename T>T maxn(T* a, int n);
template <> char* maxn(char* a[], int n);

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
//    int a[5] = {1, 2, 3, 4, 5};
//    double b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
//
//    int a_max = max5(a);
//    double b_max = max5(b);
//    std::cout<<"int a_max: "<<a_max<<" double b_max"<<b_max;

    // 299 6
    // 获得char*字符串长度可以使用 strlen（）
    int a_5[5] = {1, 2, 3, 4, 5};
    double a_6[6] = {1, 2, 3, 4, 5, 6};
    int a_5_max;
    double a_6_max;
    a_5_max = maxn(a_5, 5);
    a_6_max = maxn(a_6, 6);

    char* a_char[5] = {"aaa",
                       "bbbb",
                       "cccccc",
                       "dd",
                       "ee"};
    char* a_char_max = maxn(a_char, 5);
    std::cout<<"a 5 max: "<<a_5_max<<std::endl;
    std::cout<<"a 6 max: "<<a_6_max<<std::endl;
    std::cout<<"a char 5 max: "<<a_char_max<<std::endl;
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

template <typename T>T maxn(T* a, int n){
    T temp = a[0];
    for(int i=0; i<n; i++){
        if(temp < a[i]) {
            temp = a[i];
        }
    }
    return temp;
}

template <> char* maxn(char* a[], int n){
    char* temp = a[0];
    for(int i=0; i<n; i++){
        if(strlen(temp) < strlen(a[i])) {
            temp = a[i];
        }
    }
    return temp;
}