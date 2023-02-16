#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    idAktualnegoUzytkownika = uzytkownikMenadzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHasla() {
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    idAktualnegoUzytkownika = uzytkownikMenadzer.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata() {
    menadzerAdresata.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    menadzerAdresata.wyswietlWszystkichAdresatow();
}

int KsiazkaAdresowa::pobierzIdAktualnegoUzytkownika() {
    return idAktualnegoUzytkownika;
}
