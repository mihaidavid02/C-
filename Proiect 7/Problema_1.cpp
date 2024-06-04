#include<iostream>
using namespace std;

int factorial (int numar)
{
    if(numar<=1) return 1; //condita de oprire
    else return  numar * factorial(numar - 1); //recursivitate
}
int main()
{
    int n;
    cout<<"n=";
    cin>>n; //citesc numarul
    cout<<factorial(n); //apelez functia


/*
exemplu
factorial(3)
=3*factorial(2)
=3*2*factorial(1)
=3*2*1*factorial(0)
=3*2+1*1
=3*2*1*1
=3*3
=6
*/
}
