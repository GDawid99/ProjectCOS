#ifndef KLIENT_H
#define KLIENT_H

class Klient : Osoba {

public:
	int id_klienta;

	void kontakt_z_sprzedawca();

	void utworz_zamowienie(Zamowienie_klienta zamowienie);

	void zglos_reklamacje(Reklamacja rekl);

	void wyszukaj_produkt();

	void wybierz_produkt();

	void przegladaj_strone();

	bool sprawdz_poprawnosc_danych();

	void anuluj_zamowienie();
};

#endif
