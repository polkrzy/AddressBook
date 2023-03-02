#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenadzer.logowanieUzytkownika();

    if(uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        menadzerAdresata = new MenadzerAdresata(NAZWA_PLIKU_Z_ADRESATAMI, NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHasla() {
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenadzer.wylogowanieUzytkownika();
    delete menadzerAdresata;
    menadzerAdresata = NULL;
}

void KsiazkaAdresowa::dodajAdresata() {
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        menadzerAdresata->dodajAdresata();
    } else {
        cout << "Aby dodac adresata, nalezy sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    if (uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika() > 0) {
        menadzerAdresata->wyswietlWszystkichAdresatow();
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    menadzerAdresata->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    menadzerAdresata->wyszukajAdresatowPoNazwisku();
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    return uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::usunAdresata() {
    menadzerAdresata->usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata() {
    menadzerAdresata->edytujAdresata();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    return MetodyPomocnicze::wczytajZnak();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    return MetodyPomocnicze::wczytajZnak();
}
