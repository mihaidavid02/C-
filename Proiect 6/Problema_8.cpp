#include<iostream>
using namespace std;


//functia de citire
void citire(int l,int c,int a[100][100])
{

    cout<<"Dati cele "<<l*c<<" elemente ale matricei\n";
    for(int i=1;i<=l;i++)
        for(int j=1;j<=l;j++)
        cin>>a[i][j];

}
//functia de afisare
void afisare(int l,int c,int a[100][100])
{
    cout<<"Matricea este \n";
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void verificare(int a[100][100],int l,int c,int l1,int l2)
{
    int ok;
    ok=1;
    for(int j=1;j<c;j++)
      if(a[l1][j]!=a[l2][j]) //verific daca linia 1 corespunde cu linia 2
        ok=0;
    if(ok)
        cout<<"DA"; //are l1 = l2
    else cout<<"NU";

}


int main()
{

    int l,c,i,j,a[100][100];
    int l1,l2;
    l=c=10;
    citire(l,c,a);
    cout<<"Dati 2 linii pe care doriti sa le verificati (l1<l l2<l)\n";
    cout<<"l1="; cin>>l1; //citesc cele 2 line pentru a determina daca sunt egale
    cout<<"l2="; cin>>l2;
   verificare(a,l,c,l1,l2); ///apelez functia
   cout<<endl;
    afisare(l,c,a);
}
