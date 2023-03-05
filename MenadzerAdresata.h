#ifndef MENADZERADRESATA_H
#define MENADZERADRESATA_H

#include <windows.h> //pause

#include "PlikZAdresatami.h"

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
        : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), plikZAdresatami(nazwaPlikuZAdresatami, nazwaTymczasowegoPlikuZAdresatami) {
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
