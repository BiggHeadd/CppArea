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

int main() {
    const char* a = "aaaaa";
    for(int j=0; j<10; j++){
        printString(a, j);
    }
    printString(a);
    return 0;
}