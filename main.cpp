#include <iostream>
using namespace std;

float a, b, wynik;

int main(void)
{
    system("cls");

    cout << "Wpisz liczbe 1: ";
    if (!(cin >> a))
    {   
        cout << "Nie wpisano liczby." << endl;
        cin.clear();
        cin.sync();
    }

    cout << "Wpisz liczbe 2: ";
    if (!(cin >> b))
    {   
        cout << "Nie wpisano liczby." << endl;
        cin.clear();
        cin.sync();
    }
    wynik = a+b;
    cout << "Wynik dodawania wynosi: " << wynik << endl;  
}//
