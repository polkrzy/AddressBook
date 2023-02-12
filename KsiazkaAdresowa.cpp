#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa() {
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}
