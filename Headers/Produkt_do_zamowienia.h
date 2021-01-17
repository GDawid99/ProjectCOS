#ifndef PRODUKT_DO_ZAMOWIENIA_H
#define PRODUKT_DO_ZAMOWIENIA_H

class Produkt_do_zamowienia {

private:
	int kod_produktu;
	string nazwa;
	string producent;

public:
	void dodaj_produkt();

	bool czy_dostepny();

	void edytuj_produkt();
};

#endif
