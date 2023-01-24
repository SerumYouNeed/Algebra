#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "funkcje.h"


using namespace std;

int score {};
int moj_wynik {};
int wynik_mnozenia, wynik_dzielenia, wynik_odejmowania, wynik_dodawania;
int a, b;
int choice;
int losowanie_dzialania;

int main()
{
    do
    {
        cout << "****************************" << endl;
        cout << "| WHAT DO YOU WANT TO DO?: |" << endl;
        cout << "****************************" << endl;
        cout << "1. MULTIPLY\n" << endl;
        cout << "2. DIVIDE\n" << endl;
        cout << "3. ADD\n" << endl;
        cout << "4. SUBTRACT\n" << endl;
        cout << "5. QUIZ\n" << endl;
        cout << "0. EXIT" << endl;
        cin >> choice;

        switch(choice)
        {
        case 0:
            cout << "SEE YOU SOON!!!" << endl;
            return 0;
        case 1:
            cout << "GREAT!!! LET'S MULTIPLY!!!" << endl;
            multiply();
            break;
        case 2:
            cout << "GREAT!!! LET'S DIVIDE!!!" << endl;
            divide();
            break;
        case 3:
            cout << "GREAT!!! LET'S ADD SOMETHING!!!" << endl;
            sum();
            break;
        case 4:
            cout << "COOL!!! LET'S SUBTRACT!!!" << endl;
            difference();
            break;
        case 5:
            cout << "AH!!! THE BRAVE ONE... LET'S SEE..." << endl;
            misc();
            break;
        default:
            cout << "UNIDENTIFIED CHOICE. DON'T WORRY. TRY AGAIN!" << endl;
        }
    }
    while(true);
    return 0;
}
