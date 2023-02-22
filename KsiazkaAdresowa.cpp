#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenadzer.logowanieUzytkownika();
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    menadzerAdresata.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

void KsiazkaAdresowa::zmianaHasla() {
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenadzer.wylogowanieUzytkownika();
    menadzerAdresata.ustawIdZalogowanegoUzytkownika(uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    menadzerAdresata.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

}

void KsiazkaAdresowa::dodajAdresata() {
    menadzerAdresata.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    menadzerAdresata.wyswietlWszystkichAdresatow();
}
