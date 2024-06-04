// Problema_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//1. * Să se definească un tip structură pentru numere complexe și să se implementeze funcții pentru toate 
//operațiile care pot fi efectuate cu aceste numere : adunare, scădere, înmulțire, calcularea modulului, 
//citirea(transmiteti parametrul de tip structura prin referinta.De ce ? ) și afișarea variabilelor de acest tip.
//Testati toate functiile implementate.
#include <iostream>
using namespace std;

struct Nr_Complex {
    double parte_reala; 
    double parte_imaginara;
}; 

//functie penru citirea numerelor complexe
void citire_numar_complex(struct Nr_Complex &nr_c1, struct Nr_Complex &nr_c2)
{
    //citesc primul numar complex de forma z1 = a1 + b1i
    cout << "Dati valorile pentu primul numar complex" << endl;
    cout << "z1 = a1 + b1i" << endl;
    cout << "a1 = "; //partea reala a primului numar complex
    cin >> nr_c1.parte_reala;
    cout << "b1 = "; //partrea imaginara a primului numar complex
    cin >> nr_c1.parte_imaginara;
    
    //citesc al doilea numar complex de forma z2 = a2 + b2i
    cout << "z2 = a2 +b2i" << endl;
    cout << "a2 = "; //citesc partea reala a celui de-al doilea numar compelx
    cin >> nr_c2.parte_reala;
    cout << "b2 = "; //citesc partea imaginara a celui de-al doilea numar complex
    cin >> nr_c2.parte_imaginara;
}

//functie pentru afisarea numerelor complexe
void afisare_numar_compex(struct Nr_Complex nr_c1, struct Nr_Complex nr_c2)
{
    cout << "z1 = " << nr_c1.parte_reala << " + " << nr_c1.parte_imaginara << "i" << endl;
    cout << "z2 = " << nr_c2.parte_reala << " + " << nr_c2.parte_imaginara << "i" << endl;
}
//functie pentru suma celor 2 numere complexe
void SumaNumereComplexe(struct Nr_Complex nr_c1, struct Nr_Complex nr_c2)
{
   
    double SumaParteaReala;
    SumaParteaReala = nr_c1.parte_reala + nr_c2.parte_reala;
    cout << "SumaParteaReala = " << SumaParteaReala << endl;
    double SumaParteaImaginara;
    SumaParteaImaginara = nr_c1.parte_imaginara + nr_c2.parte_imaginara;
    cout << "SumaParteaImaginara = " << SumaParteaImaginara << endl;
    cout << "z1 + z2 = " << SumaParteaReala << " + " << SumaParteaImaginara << "i" << endl;

}

//functie pentru scaderea celor 2 numere complexe
void ScadereNumereComplexe(struct Nr_Complex nr_c1, struct Nr_Complex nr_c2)
{
    double ScadereParteaReala;
    ScadereParteaReala = nr_c1.parte_reala - nr_c2.parte_reala;
    cout << "ScadereParteaReala = " << ScadereParteaReala << endl;
    double ScadereParteaImaginara;
    ScadereParteaImaginara = nr_c1.parte_imaginara - nr_c2.parte_imaginara;
    cout << "ScadereParteaImaginara = " << ScadereParteaImaginara << endl;

   if (ScadereParteaImaginara < 0) //verific daca partea imaginara este negativa pentru a afisa corespunzator
        cout << "z1 - z2 = " << ScadereParteaReala << " - " << abs(ScadereParteaImaginara) << "i" << endl;
    else
       cout << "z1 - z2 = " << ScadereParteaReala << " + " << ScadereParteaImaginara << "i" << endl;
}

//functie pentru inmultirea celor 2 numere complexe
void ProdusNumereComplexe(struct Nr_Complex nr_c1, struct Nr_Complex nr_c2)
{
    double InmultireParteReala;
    InmultireParteReala = nr_c1.parte_reala * nr_c2.parte_reala - nr_c1.parte_imaginara * nr_c2.parte_imaginara;
    cout << "InmultireParteReala = " << InmultireParteReala << endl;
    double InmultireParteImaginara;
    InmultireParteImaginara = nr_c1.parte_reala * nr_c2.parte_imaginara + nr_c2.parte_reala * nr_c1.parte_imaginara;
    cout << "InmultireParteImaginara = " << InmultireParteImaginara << endl;
    cout << "z1 * z2 = " << InmultireParteReala << " + " << InmultireParteImaginara << "i" << endl;

}


//functie pentru calcluarea modulului unui numar complex
void ModululuUnuiNumarCompelex(struct Nr_Complex nr_c)
{
    double ModulNumarComplex;
    ModulNumarComplex = sqrt(nr_c.parte_reala * nr_c.parte_reala + nr_c.parte_imaginara * nr_c.parte_imaginara); 
    cout << ModulNumarComplex;
}

int main()
{
    struct Nr_Complex nr_c1;
    struct Nr_Complex nr_c2;
    citire_numar_complex(nr_c1, nr_c2);
    afisare_numar_compex(nr_c1, nr_c2);
    SumaNumereComplexe(nr_c1,nr_c2);   //apelez functia pentru suma celor 2 numere complexee
    ScadereNumereComplexe(nr_c1, nr_c2); //apelez functia pentru scaderea celor 2 numere complexe
    ProdusNumereComplexe(nr_c1, nr_c2);  //apelez functia pentru prdodusul celor 2 numere complexe
    cout << "|z1| = "; ModululuUnuiNumarCompelex(nr_c1); //apelez functia pentru calcularea modului primului numar complex
    cout << endl;
    cout << "|z2| = "; ModululuUnuiNumarCompelex(nr_c2); //apelez functia pentru calcularea modului celui de-al doilea numar complex
    cout << endl;

 return 0;
}
