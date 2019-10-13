#include <iostream>
#include <cstring>
#include "golf.h"

struct chaff{
    char dross[20];
    int slag;
};

void p9_1(){
    // p338 1
    golf g[100];
    int flag = 1;
    int count=0;
    do{
        golf temp;
        flag = setgolf(temp);
        g[count++] = temp;
    }while(flag!=0);

    for(int i=0; i<count; i++){
        showgolf(g[i]);
    }
}

char buffer[1024];
void p9_3(){
    // p338 3
    chaff *pcha = new (buffer) chaff[2];
    char *pc = new char[1024];
    chaff *pcha_2 = new (pc) chaff[2];
    char dross[20] = {0};
    int slag = 0;

    for(int i=0; i<2; i++){
        std::cout<<"Enter dross of #" << i+1 << " chaff: ";
        std::cin.getline(dross, 20);
        std::cout<<"Enter slag of #"<< i+1 << " chaff: ";
        std::cin>>slag;
        std::cin.get();

        strcpy(pcha[i].dross, dross);
        pcha[i].slag = slag;

        strcpy(pcha_2[i].dross, dross);
        pcha_2[i].slag = slag;
    }

    for(int i=0; i<2; i++){
        std::cout<<"chaff #" << i+1 << ":" << std::endl;
        std::cout<<"pcha.dross: " << pcha[i].dross << " pcha.slag: " <<pcha[i].slag << std::endl;
        std::cout<<"pcha_2.dross: " << pcha_2[i].dross << " pcha.slag: " <<pcha_2[i].slag << std::endl;
    }

    std::cout << "address of buffer: " << (void *)buffer << std::endl;
    std::cout << "address of pcha: " << pcha << ". address of pcha[0]: " << &pcha[0] << ". address of pcha[1]: " << &pcha[1] << std::endl;
    std::cout << "address of pc: " << (void *)pc << std::endl;
    std::cout << "address of pcha2:" << pcha_2 << ". address of pcha2[0]: " << &pcha_2[0] << ". address of pcha2[1]: " << &pcha_2[1] << std::endl;;

    delete[] pc;
}

int main() {
//    p9_1();
    p9_3();
    return 0;
}