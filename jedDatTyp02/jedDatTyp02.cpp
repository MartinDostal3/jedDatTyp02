// jedDatTyp02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

int main()
{
    char x;
    int pocet = 0;
    int vzdalenostVelke = 'A' - 'a';
    int vzdalenostMale = 'a' - 'A';

    cout << "Zadavej znaky * znamena konec: " << endl;
    cin >> x;

    bool obsahuje = false;

    while (x != '*' && !obsahuje)
    {
        cout << "\nZadany znak je: " << x << endl;

        if (x >= 'a' && x <= 'z')
        {
            char velkePismeno = vzdalenostVelke + x;
            cout << "\nvelke pismeno je: " << velkePismeno << endl;
        }
        if (x >= 'A' && x <= 'Z')
        {
            char malePismeno = vzdalenostMale + x;
            cout << "\nmale pismeno je: " << malePismeno << endl;
        }

        if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') || (x >= '0' && x <= '9'))
        {
            pocet++;

            if (pocet >= 5)
            {
                obsahuje = true;
            }
        }







        cin >> x;
    }
    if (obsahuje)
    {
        cout << "\nPosloupnost obsahuje 5 alfanumerickych znaku" << endl << endl;
    }
    else
    {
        cout << "\nPosloupnost neobsahuje 5 alfanumerickych znaku" << endl << endl;
    }




    
}


