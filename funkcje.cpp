#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "funkcje.h"

using namespace std;


void multiply()
{
    srand( time( NULL ) );
    a =( rand() % 10) + 0;
    b =( rand() % 10) + 0;
    wynik_mnozenia = a * b;
    cout << a << " x " << b << endl;
    cin >> moj_wynik;
    if(moj_wynik == wynik_mnozenia)
    {
        grats();
        multiply();
    }
    else
    {
        sorry();
    }
    exit(0);
}

void divide()
{
    srand( time( NULL ) );
    a =( rand() % 100) + 0;
    b =( rand() % 100) + 1;
    cout << b << endl;
    while ((b>a) || (a % b != 0))
    {
        b =( rand() % 100) + 1;
    }
    cout << b << endl;
    wynik_dzielenia = a / b;
    cout << a << " / " << b << endl;
    cin >> moj_wynik;
    if(moj_wynik == wynik_dzielenia)
    {
        grats();
        divide();
    }
    else
    {
        sorry();
    }
    exit(0);
}

void sum()
{
    srand( time( NULL ) );
    a =( rand() % 50) + 0;
    b =( rand() % 50) + 0;
    wynik_dodawania = a + b;
    cout << a << " + " << b << endl;
    cin >> moj_wynik;
    if(moj_wynik == wynik_dodawania)
    {
        grats();
        sum();
    }
    else
    {
        sorry();
    }
    exit(0);
}

void difference()
{
    srand( time( NULL ) );
    a =( rand() % 100) + 0;
    b =( rand() % a) + 0;
    wynik_odejmowania = a - b;
    cout << a << " - " << b << endl;
    cin >> moj_wynik;
    bool zestawienie_wynikow = moj_wynik == wynik_odejmowania;
    if( zestawienie_wynikow )
    {
        grats();
        difference();
    }
    else
    {
        sorry();
    }
    exit(0);
}

void misc()
{
    do
    {
        srand ( time (NULL) );
        losowanie_dzialania = ( rand () % 4 ) + 1;
        if( losowanie_dzialania == 1)
        {
            multiply();
            misc();
        }
        else if( losowanie_dzialania == 2)
        {
            divide();
            misc();
        }
        else if( losowanie_dzialania == 3)
        {
            sum();
            misc();
        }
        else
        {
            difference();
            misc();
        }
    }
    while (1);
    exit( 0 );
}

void grats()
{
        cout << "VERY WELL.\n";
        score++;
        cout << "YOU HAS GOT " << score << " POINTS." << endl;
        system("pause");
        system("cls");
}

void sorry()
{
    cout << "UNFORTUNATELY, YOUR ANSWER IS WRONG." << endl;
    cout << "YOU EARNED " << score << " POINTS!" << endl;
}
