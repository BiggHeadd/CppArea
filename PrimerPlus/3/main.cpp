#include <iostream>

void printString(const char* string, int count=0);
void printString(const char* string, int count){
    static int uses;
    uses++;
    std::cout<<"the function uses: "<<uses<<" times;"<<std::endl;
    if(count==0){
        std::cout<<string<<std::endl;
    }else{
        for(int i=0; i<count; i++){
            std::cout<<string<<std::endl;
        }
    }
}

struct CandyBar{
    std::string brandName;
    double weight{};
    int energy{};
};

void setCandyBar(CandyBar& candyBar, const char* brandName="Millennium Munch", double w=2.85, int e=350);
void SetCandyBar(CandyBar& candyBar, char* brandName, double w, int e){
    candyBar.brandName = brandName;
    candyBar.weight = w;
    candyBar.energy = e;
}

void printCandyBar(const CandyBar& candyBar){
    std::cout<<std::endl;
    std::cout<<"**********The info of this CandyBar**********"<<std::endl;
    std::cout<<"Name: "<<candyBar.brandName<<std::endl;
    std::cout<<"Weight: "<<candyBar.weight<<"\t"<<"Engry: "<<candyBar.energy<<std::endl;
    std::cout<<std::endl;
}


int main() {
    // p298 1.
//    const char* a = "aaaaa";
//    for(int j=0; j<10; j++){
//        printString(a, j);
//    }
//    printString(a);

    // p298 2.
    CandyBar candyBar;
    char* name = "chocolate";
    SetCandyBar(candyBar, name, 3.00, 400);
    printCandyBar(candyBar);
    return 0;
}