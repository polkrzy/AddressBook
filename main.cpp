#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main() {

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while (true) {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0) {
            switch (ksiazkaAdresowa.wybierzOpcjeZMenuGlownego()) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            switch (ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika()) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            /* case '2':
                    wyszukajAdresatowPoImieniu(adresaci);
                    break;
                case '3':
                    wyszukajAdresatowPoNazwisku(adresaci);
                    break;
        */  case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            /*    case '5':
                    idUsunietegoAdresata = usunAdresata(adresaci);
                    idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                    break;
                case '6':
                    edytujAdresata(adresaci);
                    break;
        */  case '7':
                ksiazkaAdresowa.zmianaHasla();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
            }
        }
    }
    return 0;
}
