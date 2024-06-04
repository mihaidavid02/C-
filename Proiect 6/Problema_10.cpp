#include<iostream>
#include <cmath> // biblioteca pt sqrt
using namespace std;


float doubldelta(int a, int b, int c)
{
    int delta;
    delta = b * b - 4 * a * c;
    return delta;
}


bool solecII(int a, int b, int c, float& x1, float& x2)
{
    if (doubldelta(a, b, c) >= 0)
    {
        x1 = (-b + sqrt(doubldelta(a, b, c))) / 2 * a;
        x2 = (-b - sqrt(doubldelta(a, b, c))) / 2 * a;
        return true;

    }


        return false;

}


int main()
{
    int a, b, c;
    float x1, x2; //solutiile ecuatiei
    //citesc cei 3 coeficienti ai ecuatiei de gr II
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    if (solecII(a, b, c, x1, x2)) //aplez funcia
    {
        cout << "Solutiile ecuatiei sunt \n";
        cout << "x1=" << x1 << endl; //afisez solutiile
        cout << "x2=" << x2;
    }
    else
    cout << "Solutiile ecuatiei nu sunt reale ";





}
