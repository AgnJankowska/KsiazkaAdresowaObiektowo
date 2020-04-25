#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika ()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika ()
{
    uzytkownikManager.logowanieUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow ()
{
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}

//int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika ()
//{
//    uzytkownikManager.pobierzIdZalogowanegoUzytkownika();
//}
