#include <string>
#ifndef PRODUKT_H
#define PRODUKT_H

using namespace std;

class Produkt {

private:
	double rozmiar;
	string kolor;
	int kod_produktu;
	string material;
	double cena;
	string rodzaj_produktu;

public:
	void zmien_cene(double cena);

	void dodaj_produkt();

	bool czy_dostepny();

	void sprawdz_dostepnosc();
};

#endif
