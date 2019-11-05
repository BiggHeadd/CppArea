#include<stdio.h>
class A
{   public:
    A() : x(0), y(0){}
    // 正确
    void func(const int p)  {
        x = p;
        y = p;
    }
    //　下面这种写法会编译出错，因为const修饰类函数的话，this指针为指针常量，不能修改其指向的地址
//    void func(const int p) const {
//        x = p;
//        y = p;
//    }
    int getY()
    {   return y;
    }
    int x;
private:
    int y;
};

int main(int argc, char* argv[])
{
//    // 指针常量　常量指针
//    char str1[]="str1";
//    char str2[]="str2";
//    char *const p = str1; // const 在＊右边，是指针常量，不能修改其指向的地址
//    p = str2;
//
//    char str1[]="str1";
//    char *const p = str1;
//    p[0] = 'X'; // const 在＊右边，是指针常量可以修改其地址的内容
//    printf("%s", str1);

    A a;
    printf("x:%d y:%d\n", a.x, a.getY());
    a.func(2);
    printf("x:%d y:%d\n", a.x, a.getY());
    return 0;
}