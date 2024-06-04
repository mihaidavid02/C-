#include<iostream>
using namespace std;



void citire(int *v,int &n)
{
    int i;
    cout<<"Dati un numar ";
    cin>>n; //citesc numarul
    cout<<"Dati cele "<<n<<" numere naturale ";
    for(i=1;i<=n;i++)
        cin>>v[i];
}
//afisare vector
void afisare(int *v,int n)
{
    int i;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
//sortare crescatoare vector
void sortare(int *v,int n)
{
    int ok;
    do
    {
        ok=1;
        for(int i=1;i<n;i++)
            if(v[i]>v[i+1])
        {
            swap(v[i],v[i+1]);
            ok=0;
        }

    }while(!ok);
    cout<<"Vectorul sortat crescator este ";
    afisare(v,n); //apelez functia de afisare
}

int main()
{
    int v[20],n,i;
    citire(v,n); //apelez functia de citire
    sortare(v,n); //apelez functia de sortare
}
