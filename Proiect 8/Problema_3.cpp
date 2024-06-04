#include<iostream>
#include<stdlib.h>
using namespace std;

void aloc(int** matrice, int l)
{
    matrice = (int**)malloc(l * sizeof(int));
}
void citire(int** matrice, int l, int c)
{
    int i, j;
    aloc(matrice, l);
    cout << "Dati cele " << l * c << " elemente ale matricei \n";

    for (i = 0; i < l; i++)
    {
        matrice[i] = (int*)malloc(c1*sizeof(int*));
        for (j = 0; j < c; j++)
            cin >> matrice[i][j];
    }
}

void afisare(int** matrice, int l, int c)
{
    int i, j;
    cout << "Cele " << l * c << " elemente ale matricei sunt \n";
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
            cout << matrice[i][j] << " ";
        cout << endl;
    }
}
void adunare(int** matrice1, int l1, int c1, int** matrice2, int l2, int c2)
{
    if (l1 == l2 && c1 == c2)
    {
        int ** suma;
        aloc(suma, l1);
        for (int i = 0; i < l1; i++) {
             suma[i]=aloc(suma, c1);
            for (int j = 0; j < c1; j++)
                suma[i][j] = matrice1[i][j] + matrice2[i][j];
        }

    }
}
void inmultire(int** matrice1, int l1, int c1, int** matrice2, int l2, int c2)
{
    if (l1 == c2)
    {
        int** produs;
        aloc(produs, l1);
        for (int i = 0; i < l1; i++)
        {
            produs[i]=aloc(produs, c2);
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                    produs[i][j] = produs[i][j] + matrice1[i][k] * matrice2[k][j];
            }
        }
    }
    else cout << "Nu se poate inmulti cele doua matrici :(";
}
int main()
{
    int l1, c1, ** matrice1, ** matrice2, l2, c2;
    cout << "Dati numarul de linii pentru prima matrice";
    cin >> l1;
    cout << "dati numarul de coloane pentru prima matrice";
    cin >> c1;
    citire(matrice1, l1, c1);
    cout << "Dati numarul de linii pentru a doua matrice";
    cin >> l2;
    cout << "dati numarul de coloane pentru a doua matrice";
    cin >> c2;
    citire(matrice2, l2, c2);
    int** suma, ** produs;
    adunare(matrice1, l1, c1, matrice2, l2, c2);
    afisare(suma, l1, c1);
    inmultire(matrice1, l1, c1, matrice2, l2, c2);
    afisare(produs, l1, c1);

}
