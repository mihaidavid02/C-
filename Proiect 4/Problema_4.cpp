#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    unsigned n,i,p=0,j,ok;
    char sir[10],sir_nou[10]={},a;
    cout<<"Dati un numar natural ";
    cin>>n; //citesc numarul
    for(i=1;i<n;i++)
        {
            cin>>sir[i]; //citesc sirul de caractere

        }
    for(i=1;i<n;i++)
      {

         ok=1;
        for(j=i+1;j<n;j++)
          if(sir[i]==sir[j]) //daca gasesc 2 litere la fel
            ok=0;
        if(ok)
            sir_nou[p++]=sir[i]; //creez noul sir

      }
    cout<<sir_nou;


}
