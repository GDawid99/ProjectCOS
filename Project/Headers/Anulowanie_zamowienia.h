#ifndef ANULOWANIE_ZAMOWIENIA_H
#define ANULOWANIE_ZAMOWIENIA_H

class Anulowanie_zamowienia {

private:
	string powod;
	string data_zlozenia;
	int id_zamowienia;

public:
	string podaj_powod(powod p);

	void przeslij_do_sprzedawcy(id_zamowienia id);
};

#endif
