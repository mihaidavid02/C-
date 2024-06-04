#include<iostream>
#include<stdlib.h>
using namespace std;
//functia de citire
void citire (char *&vectorGeneral,int n)
{
int i;
cout<<"Dati cele "<<n<<" elemente\n";
for(i=1;i<=n;i++)
    cin>>vectorGeneral[i];

}
//functia de afisare
void afisare (char *vectorGeneral,int n)
{
int i;
cout<<"Cele "<<n<<" numere afisate sunt\n ";
for(i=1;i<=n;i++)
    cout<<vectorGeneral[i]<<" ";  //afisez elementele vectorului
    cout<<endl;
}

void concatenare (char *&vector3,char *vector1,char *vector2,int n,int m)
{
    int i;
    int j=1;
    for(i=1;i<=n;i++)
        vector3[j++]=vector1[i]; //introduc elementele din primul vector in vector3
    for(i=1;i<=m;i++)
        vector3[j++]=vector2[i]; //introduc elementele din al doilea vector in vector3


}
int main()
{

int n,m;
cout<<"Dati lungimea primului sir de caractere: "<<endl;
cin>>n;
cout<<"Dati lungimea celui de-al doilea sir de caractere: "<<endl;
cin>>m;
char *vector1,*vector2,*vector3;
vector1=(char*)malloc(sizeof(char)*(n+1));
vector2=(char*)malloc(sizeof(char)*(m+1));
vector3=(char*)malloc(sizeof(char)*(n+m+1));
///citesc primul vector
citire(vector1,n); //apelez functia de citire pentru ce doi vectori
citire(vector2,m);
afisare(vector1,n);//apele functia de afisare pentru cei doi vectori
afisare(vector2,m);
concatenare(vector3,vector1,vector2,n,m); // apelez functia de concatenare
afisare(vector3,n+m);  //apelez functia de concatenare
return 0;

}
