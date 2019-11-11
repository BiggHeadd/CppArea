#include <iostream>
#include <cstring>
using namespace std;
class CA
{public:
    CA(int b,char* cstr)
    {a=b;
        str=new char[b];
        strcpy(str,cstr);
        cout << "构造成功"<<endl;}

    void Show()
    {cout<<"构造的字符串为："<<str<<endl;
        cout<<"构造的字符串地址为："<<(int*)str<<endl;
    }
    CA(CA &B){
        a = B.a;
        char* tmp = new char;
        strcpy(tmp, B.str);
    }
    ~CA(){delete str;}
private:
    int a;
    char *str;};
int main()
{CA A(10,"Hello!");
    A.Show();
    CA B=A;
    B.Show();
    return 0; }