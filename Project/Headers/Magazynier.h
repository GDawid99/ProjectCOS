#ifndef MAGAZYNIER_H
#define MAGAZYNIER_H

class Magazynier : Osoba {


public:
	void dodaj_produkt_do_magazynu();

	void usun_produkt_z_magazynu();

	void kontakt_z_sprzedawca();

	void kontakt_z_kierownikiem();

	void sprawdz_stan_magazynu();

	void wysylka_towaru();

	void zloz_zamowienie(Zamowienie_do_magazynu zamowienie);
};

#endif
