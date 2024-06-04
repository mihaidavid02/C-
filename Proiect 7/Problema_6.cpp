#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//functia de eliminare
int ramas;
char eliminare_litera(char *&sir_caractere,char c)
{
    int i;
    ramas=strlen(sir_caractere);
    for(i=0;i<strlen(sir_caractere);i++)
        if(sir_caractere[i]==c) //daca litera respectiva este egal ccu caracterul c
            {
                strcpy(sir_caractere+i,sir_caractere+i+1); //atungi stergem caracterul respectiv
                i--;
                ramas--;
            }
}
int main()
{
    char *sir_caractere;
    char c;
    int n;
    cout<<"n=";
    cin>>n; //citim numarul de elemente din sir
    sir_caractere=(char*)malloc(sizeof(char)*n);
    cout<<"Dati sirul de caractere: ";
    cin.get();
    cin.get(sir_caractere,n+1);
   cout<<"Dati un caracter pe care doriti sa-l eliminati din sir: ";
    cin>>c;
    eliminare_litera(sir_caractere,c);
    cout<<sir_caractere; //afisam sirul modificat dupa aplelarea functiei
}
