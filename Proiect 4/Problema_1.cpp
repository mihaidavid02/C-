#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char propozitie[100];
    int i,l;
    int litere_mari=0,litere_mici=0,numere=0;
    cout<<"Dati propozitia cu litere mari si mici ";
    cin.get(propozitie,100); //citesc propoztia
    l=strlen(propozitie);
    for(i=0;i<l;i++)
        if(propozitie[i]>='a' && propozitie[i]<='z') //verificam daca e litera mica
            {
                propozitie[i]-=32; //daca e litera mica o facem mare
                litere_mari++; //crestem numarul de litere mari
            }
            else if(propozitie[i]>='A' && propozitie[i]<='Z') //verificam daca e litera mare
                {
                    propozitie[i]+=32; //daca e o facem mica
                    litere_mici++; //crestem numarul de litere mici
                }
                else numere++; //daca nu e nici litera mare nici litera mica insemna ca e cifra
    cout<<"Propozitia dupa modificare este "<<propozitie<<endl;
    cout<<"Sunt "<<litere_mici<<" litere mici si "<<litere_mari<<" litere mari si "<<numere<<" numere";
    return 0;
}
