#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenadzer.logowanieUzytkownika();
    uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::zmianaHasla() {
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenadzer.wylogowanieUzytkownika();
    uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata() {
    menadzerAdresata.dodajAdresata();
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    menadzerAdresata.wyswietlWszystkichAdresatow();
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}
