#ifndef MENADZERADRESATA_H
#define MENADZERADRESATA_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <windows.h> //pause

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

class MenadzerAdresata {
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    int idWybranegoAdresata;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    vector <Adresat> pobierzVectorAdresaci();

protected:
    vector <Adresat> adresaci;
    int idUsuwanegoAdresata;
    int idEdytowanegoAdresata;
public:
    MenadzerAdresata(string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami, int idZalogowanegoUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami, nazwaTymczasowegoPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
        idUsuwanegoAdresata = 0;
        idEdytowanegoAdresata = 0;
    };

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
    void edytujAdresata();
};

#endif
