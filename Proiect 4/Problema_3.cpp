#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *p;
    int contor=0,k,l,i;
    cout<<"l="; cin>>l;
    char sir_caractere[l];
    cout<<"Dati sirul de caractere ";
    for(i=0;i<l;i++)
        cin>>sir_caractere[i]; //citesc sirul de caractere

   cout<<"k="; cin>>k;
   char secventa[k];
    cout<<"Dati secventa";
    for(i=0;i<k;i++)
        cin>>secventa[i]; //citesc secventa
    p=strstr(sir_caractere,secventa);
    while(p)
    {
        contor++;
        p++;
        p=strstr(p,secventa);
    }
    cout<<"Secventa '";
    for(i=0;i<k;i++)
        cout<<secventa[i];
    cout<<"' apare de "<<contor<<" ori in sirul de caractere '";
    for(i=0;i<l;i++)
        cout<<sir_caractere[i]; //afisam
    cout<<"'";

}
