#include <iostream>
using namespace std;
int main()
{
    int l1, c1, l2, c2, a1[20][20], a2[20][20], i, j;
    cout << "Dati numarul de linii a primei matrici ";
    cin >> l1;
    cout << "Dati numarul de coloane a primei matrici ";
    cin >> c1;
    cout << "Dati cele " << l1 * c1 << " elemente ale primei matrice \n";
    for (i = 0; i <= l1 - 1; i++)
        for (j = 0; j <= c1 - 1; j++)
            cin >> a1[i][j];
    cout << "Dati numarul de linii a celei de-a doua matrice ";
    cin >> l2;
    cout << "Dati numarul de coloane a celei de-a doua matrice ";
    cin >> c2;
    cout << "Dati cele " << l2 * c2 << " elemente ale celei de-a doua matrice \n";
    for (i = 0; i <= l2 - 1; i++)
        for (j = 0; j <= c2 - 1; j++)
            cin >> a2[i][j];


    //adunare matrice
    int s[20][20];
    if (l1 == l2 && c1 == c2)
    {
        for (i = 0; i <= l1 - 1; i++)
            for (j = 0; j <= c1 - 1; j++)
                s[i][j] = a1[i][j] + a2[i][j];

        cout << "Suma celor doua matrici este \n";
        for (i = 0; i <= l1 - 1; i++)
        {
            for (j = 0; j <= c1 - 1; j++)
                cout << s[i][j] << " ";
            cout << endl;
        }
    }
    else cout << "Nu se poate calcula suma celor 2 matrici :(\n";

    //inmultire matrice
    //(l1,c1)*(l2,c2)=(l1,c2)
    int k, suma = 0;
    int c[20][20];

    if (l1 == c2)
    {
        for (i = 0; i <= l1 - 1; i++)
        {
            for (j = 0; j <= c2 - 1; j++)
            {
             c[i][j] = 0;
              for (k = 0; k <= c1 - 1; k++)
                c[i][j] = c[i][j] + a1[i][k] * a2[k][j];
            }
        }
    }
    else cout << "Nu se poate inmulti cele doua matrici :(";

    cout<<"Rezultatul dupa inmultirea matricelor este \n";
    for (i = 0; i <= l1 - 1; i++)
    {
        for (j = 0; j <= c2 - 1; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;


}
