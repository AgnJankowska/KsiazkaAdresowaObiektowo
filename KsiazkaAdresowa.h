#ifndef KsiazkaAdresowa_H
#define KsiazkaAdresowa_H
#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;
    AdresatManager *adresatManager;         //tworzymy wskaznik na obiekt
    const string NAZWA_PLIKU_Z_ADRESATAMI;  //poniewaz nie tworzymy obiekty adresatManager tylko wskaznik na niego tutaj musimy stworzyc now¹ zmienna do naszego konstruktora

public:
    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikManager (nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami)  //konstroktor KsiazkaAdresowa zawiera przypisanie wartosci do zmiennych nazwaPlikuZUzytkownikami (na obiekcie uzytkownikManager) i nazwaPlikuZAdresatami na zmiennej!!! bo obiektu adresaciManager nie tworzylismy
    {
        adresatManager = NULL;          //wskaznik musimy zawsze ustawic na NULL,
    };

    ~KsiazkaAdresowa()
    {
        delete adresatManager;          //usuwamy obiekt
        adresatManager = NULL;          // wskaznik ustawiamy znowu na NULL
    };

    int pobierzIdZalogowanegoUzytkownika();

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

    bool czyUzytkownikJestZalogowany();
};
#endif
