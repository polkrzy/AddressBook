#ifndef UZYTKOWNIKMENADZER_H    //Fajnie bytlob by w destruktorze dac wylogowanie??
#define UZYTKOWNIKMENADZER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <windows.h> //pause

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class UzytkownikMenadzer {
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

    PlikZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikMenadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};

    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogowanieUzytkownika();

};
#endif
