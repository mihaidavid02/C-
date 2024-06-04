#include <iostream>
#include <cmath>
using namespace std;



struct  OraExacta {
    int ora, minut, secunda;
};

void citire_ora_exacta(struct OraExacta& ceas)
{
    cout << "Ora cessului este ";
    cin >> ceas.ora;
    cout << "Minutul ceasului este ";
    cin >> ceas.minut;
    cout << "Secunda cesului este ";
    cin >> ceas.secunda;
}

void timpul_ramas(struct OraExacta& ceas1, struct OraExacta& ceas2)
{
    int delta;
    int ora1;
    ora1 = ceas1.ora * 3600 + ceas1.minut * 60 + ceas1.secunda;
    int ora2;
    ora2 = ceas2.ora * 3600 + ceas2.minut * 60 + ceas2.secunda;
    delta = abs(ora2 - ora1);
    int ora, minut, secunda;
    ora = delta / 3600;
    delta = delta % 3600;
    minut = delta/60;
    secunda = delta % 60;
    cout << "Ora este " << ora << " ore " << minut << " minute " << secunda << " secunde ";



   

}
int main()
{
    OraExacta ceas1;
    OraExacta ceas2;
    cout << "Prima ora \n";
    citire_ora_exacta(ceas1);
    cout << "A doua ora \n";
    citire_ora_exacta(ceas2);
    cout << "Timpul scurs este "; timpul_ramas(ceas1, ceas2);

   

}

