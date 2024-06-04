#include <iostream>
using namespace std;

//structura pentru un punct in spatiu
struct punct {
    
    float x, y;
};

//functie pentru citire
void citire_punct(struct punct &punct_general,int i)
{
    cout << "Dati abcisa celui de-al " << i << " punct -> ";
    cin >> punct_general.x;
    cout << "Dati ordonata celui de-al " << i << " punct -> ";
    cin >> punct_general.y;
}

//functie pentru afisare
void afisare_punct(struct punct& punct_general,int i)
{
    cout << "Coordonata abcisei celui de-al " << i << "-lea punct este " << punct_general.x << endl;
    cout << "Coordonata ordonatei celui de-al " << i << "-lea punct este " << punct_general.y << endl;
}

//functie pentru calculul distantei
void distanta_dintre_cele_2_puncte(struct punct& coord_a, struct punct& coord_b, int i)
{
    double distanta;
    distanta = sqrt((coord_a.y - coord_b.y) * (coord_a.y - coord_b.y) + (coord_a.y - coord_b.y) * (coord_a.y - coord_b.y)); //calculez distanta dinte cele 2 puncte
    cout << "Distanta dinte punctul " << i << " si punctul " << i + 1 << " este " << distanta << endl;
}
int main()
{
    struct punct coord_a;
    struct punct coord_b;
    int n, i;
    cout << "Dati valoarea vectorului ";
    cin >> n;
    punct* vector_coordonate;
    vector_coordonate = (punct*)malloc(n * sizeof(punct)); //alocare dinamica pentru vectorul de puncte
   
    for (i = 1; i <= n; i++)
        citire_punct(vector_coordonate[i], i);
    

    for (i = 1; i < n; i++)
        distanta_dintre_cele_2_puncte(vector_coordonate[i], vector_coordonate[i + 1],i);

    for (i = 1; i <= n; i++)
        afisare_punct(vector_coordonate[i], i);
    return 0;

        


    
}
