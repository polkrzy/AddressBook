#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenadzer.h"
#include "MenadzerAdresata.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenadzer uzytkownikMenadzer;
    MenadzerAdresata *menadzerAdresata;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;

    void wypiszWszystkichUzytkownikow();

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami)
        :   uzytkownikMenadzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami),
            NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI(nazwaTymczasowegoPlikuZAdresatami) {
        menadzerAdresata = NULL;
    };
    ~KsiazkaAdresowa() {
        delete menadzerAdresata;
        menadzerAdresata = NULL;
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHasla();
    void dodajAdresata();
    void usunAdresata();
    void edytujAdresata();
    void wylogowanieUzytkownika();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();

};

#endif
