#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenadzer.h"
#include "MenadzerAdresata.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenadzer uzytkownikMenadzer;
    MenadzerAdresata menadzerAdresata;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), menadzerAdresata(nazwaPlikuZAdresatami) {
        uzytkownikMenadzer.wczytajUzytkownikowZPliku();
    };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHasla();
    void dodajAdresata();
    void wylogowanieUzytkownika();
    void wyswietlWszystkichAdresatow();


};

#endif
