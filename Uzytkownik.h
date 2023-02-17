#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik {
    int id;
    string login;
    string haslo;
    //int idZalogowanegoUzytkownika;

public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);
    //void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
    //int pobierzIdZalogowanegoUzytkownika();

};

#endif
