#include <iostream>
using namespace std;

void fct(int &a,int &b,int &c)
{
  a+=1;
  b+=2;
  c+=5;
}

int main()
{
    int a,b,c;
    cout<<"a="; cin>>a;  //citesc primul numar
    cout<<"b="; cin>>b;  //citesc al doilea numar
    cout<<"c="; cin>>c;  //citesc cel de-al treilea numar
    fct(a,b,c); //apelez functia
    cout<<"Numerele dupa incrementare sunt \n";
    cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c; //afisez numerele dupa incrementare

}
