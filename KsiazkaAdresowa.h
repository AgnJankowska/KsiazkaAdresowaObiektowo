#ifndef KsiazkaAdresowa_H
#define KsiazkaAdresowa_H
#include <iostream>
#include "UzytkownikManager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;
public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif
