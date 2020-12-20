#ifndef KIEROWNIK_H
#define KIEROWNIK_H

class Kierownik : Osoba {


public:
	void dodaj_sprzedawce();

	void usun_sprzedawce();

	void dodaj_magazyniera();

	void usun_magazyniera();

	void sporzadz_raport(Raport raport);

	void kontakt_z_sprzedawca();

	void kontakt_z_magazynem();
};

#endif
