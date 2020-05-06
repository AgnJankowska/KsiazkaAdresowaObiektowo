#ifndef AdresatManager_H
#define AdresatManager_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatManager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

 public:
    AdresatManager (string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami (nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA (idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata ();
    void wyswietlWszystkichAdresatow();

    void usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

};
#endif
