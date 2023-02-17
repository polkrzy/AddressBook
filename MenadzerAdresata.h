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
    int idZalogowanegoUzytkownika;
    Adresat adresat;
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();


public:
    MenadzerAdresata(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idZalogowanegoUzytkownika = 0;
        //adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void ustawIdZalogowanegoUzytkownika(int noweId);
    void dodajAdresata();
    void wczytajAdresatowZPliku();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
};

#endif
