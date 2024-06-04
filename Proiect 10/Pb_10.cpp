#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

enum Categorie
{
           aliment = 0, imbracaminte = 1 ,jucarie = 2
};


struct Produs
{
  unsigned int pret;
  char* marca;
  Categorie categ;
};

void citire_produs(struct Produs& produs_general,int i)
{
    cout<<"Dati pretul celui de-al "<<i<<"-lea produs: ";
    cin>>produs_general.pret;
    produs_general.marca=(char*)malloc(20*sizeof(char));
    cout<<"Dati marca celui de-al "<<i<<"-lea produs: ";
    cin>>produs_general.marca;
    int numar_categorie;
    cout<<"Dati categoria celui de-al "<<i<<"-lea produs \n aliment = 0 \n imbracaminte = 1 \n jucarie = 2 \n";
    cout<<"Categoria este ";
    cin>>numar_categorie;
    produs_general.categ=(Categorie)numar_categorie;
    cout<<endl;
}

void afisare_produs(struct Produs& produs_general, int i)
{
    cout<<"Pretul celui de-al "<<i<<" produs este "<<produs_general.pret<<" RON "<<endl;
    cout<<"Marca celui de-al "<<i<<" produs este "<<produs_general.marca<<endl;
    cout<<"Categoria celui de-al "<<i<<" produs este ";
    switch(produs_general.categ)
    {
    case aliment:
        cout<<"Aliment";
        cout<<endl;
        break;
    case  imbracaminte:
        cout<<"imbracaminte";
        cout<<endl;
        break;
    case jucarie:
        cout<<"jucarie";
        cout<<endl;
    break;
    default: cout<<"Ati introdus o valoarea gresita ";
    cout<<endl;
    }
}

void setare_marca_produs(struct Produs& produs_general, int x)
{
    cout<<"Dati noua marca a celui de-al "<<x<<"-lea produs ";
    cin>>produs_general.marca;
}

void setare_pret_produs(struct Produs& produs_general, int x)
{
    cout<<"Dati noul pret a celui de-al "<<x<<"-lea produs ";
     cin>>produs_general.pret;
}

void setare_categorie_produs(struct Produs& produs_general, int x)
{
     int numar_categorie;
    cout<<"Dati noua categorie a celui de-al "<<x<<"-lea produs ";
    cin>>numar_categorie;
    produs_general.categ=(Categorie)numar_categorie;
    cout<<endl;
}

int main()
{
  int numar_produse; // nul din cerinta
  cout<<"Dati numarul de produse ";
  cin>>numar_produse;
  cout<<"Dati informatiile petnru cele "<<numar_produse<<" produse "<<endl;
  int i;
  Produs* vector_produs;
  vector_produs=(Produs*)malloc(numar_produse*sizeof(Produs));
    ///citesc produsele
  for(i=1;i<=numar_produse;i++)
    citire_produs(vector_produs[i],i);
    ///afisez produsele
    for(i=1;i<=numar_produse;i++)
        {
            afisare_produs(vector_produs[i],i);
            cout<<endl;
        }

    cout<<"Carui produs doriti sa-i schimbati marca (";
    for(i=1;i<numar_produse;i++)
        cout<<i<<" sau ";
    cout<<numar_produse<<") ";
    int x;
    cin>>x;
    setare_marca_produs(vector_produs[x],x);
    cout<<"Datele dupa modificare sunt \n";
    afisare_produs(vector_produs[x],x);
    cout<<endl;

     cout<<"Carui produs doriti sa-i schimbati pretul (";
    for(i=1;i<numar_produse;i++)
        cout<<i<<" sau ";
    cout<<numar_produse<<") ";
    cin>>x;
    setare_pret_produs(vector_produs[x],x);
    cout<<"Datele dupa modificare sunt \n";
    afisare_produs(vector_produs[x],x);
    cout<<endl;

    cout<<"Carui produs doriti sa-i schimbati categoria (";
    for(i=1;i<numar_produse;i++)
        cout<<i<<" sau ";
    cout<<numar_produse<<") ";
    cin>>x;
    setare_categorie_produs(vector_produs[x],x);
    cout<<"Datele dupa modificare sunt \n";
    afisare_produs(vector_produs[x],x);
    cout<<endl;

int ok;
ok=0;
    cout<<"Toate produsele din categoria alimente cu pret mai mare de 10 sunt ";
    for(i=1;i<=numar_produse;i++)
        if(vector_produs[i].pret>10 && vector_produs[i].categ==aliment)
            {
                cout<<i<<" ";
                ok=1;
            }
            if(!ok) cout<<" -- ";
            cout<<endl;

do

{
    ok=1;
    for(i=1;i<numar_produse;i++)
        if(strcmp(vector_produs[i].marca,vector_produs[i+1].marca)>0)
    {

        swap(vector_produs[i],vector_produs[i+1]);
        ok=0;
    }
}while(!ok);
cout<<"Vectorul sortat in functie de marca produselor este \n";
for(i=1;i<=numar_produse;i++)
{
    cout<<i<<endl;
    afisare_produs(vector_produs[i],i);
}
cout<<endl;
//redcere 10%
for(i=1;i<=numar_produse;i++)
    if(vector_produs[i].categ == jucarie)
      vector_produs[i].pret*=0.9;

cout<<"Toate preturile produselor de tip jucarie reduse cu 10% sunt \n";
for(i=1;i<=numar_produse;i++)
afisare_produs(vector_produs[i],i);

Produs* vector_imbracaminte;
vector_imbracaminte=(Produs*)malloc(numar_produse*sizeof(Produs));
int k=0;
for(i=1;i<=numar_produse;i++)
    if(vector_produs[i].categ == imbracaminte)
    {
        vector_imbracaminte[++k]=vector_produs[i];
    }










}
