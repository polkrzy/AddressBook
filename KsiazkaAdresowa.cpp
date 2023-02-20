#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenadzer.logowanieUzytkownika();
    idZalogowanegoUzytkownika = uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
    //adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::zmianaHasla() {
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenadzer.wylogowanieUzytkownika();
    idZalogowanegoUzytkownika = uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata() {
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    menadzerAdresata.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    menadzerAdresata.wyswietlWszystkichAdresatow();
}
