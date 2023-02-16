#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik {
    int id;
    string login;
    string haslo;
    //int idAktualnegoUzytkownika;

public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);
    void ustawIdAktualnegoUzytkownika(int noweIdAktualnegoUzytkownika);


    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
    //int pobierzIdAktualnegoUzytkownika();

};

#endif
