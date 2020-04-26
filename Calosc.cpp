#include <iostream>
#include "KsiazkaAdresowa.h"
#include "UzytkownikManager.h"

using namespace std;

int main()
{
    int haslo;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    UzytkownikManager uzytkownikManager("Uzytkownicy.txt");

    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}
