#ifndef SPRZEDAWCA_H
#define SPRZEDAWCA_H

class Sprzedawca : Osoba {


public:
	void dodaj_klienta();

	void usun_klienta();

	void dodaj_produkt_na_strone();

	void zmien_wyglad();

	void usun_produkt_ze_strony();

	void kontakt_z_klientem();

	void realizacja_zamowienia();

	void realizacja_reklamacji();

	void kontakt_magazynem();

	void anulowanie_zamowienia();

	void przeslij_wiadomosc_do_klienta();

	void informacja_o_anulowaniu_zamowienia();
};

#endif
