#ifndef REALIZACJA_ZAMOWIENIA_H
#define REALIZACJA_ZAMOWIENIA_H

class Realizacja_zamowienia {

private:
	string data_realizacji;
	string status;
	string sposob_realizacji;

public:
	void wystawienie_faktury();

	string wybor_sposobu_realizacji(string sposob);

	bool czy_wystawic_fakture();

	void wyslij_potwierdzenie_zamowienia();

	void zrealizuj_zamowienie();

	void wyswietl_liste_produktow();
};

#endif
