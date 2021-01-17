#ifndef RAPORT_H
#define RAPORT_H

class Raport {

private:
	int nr_raportu;
	string tytul;
	string data;

public:
	void dodaj_raport();

	void pokaz_raport();

	void edytuj_raport();

	void wprowadz_dane_z_sprzedazy();

	void wprowadz_dane_z_magazynu();

	void wprowadz_dane_finansowe();

	void drukuj_raport();

	void wprowadz_dane_z_zamowien();

	void wyswietl_dane_z_sprzedazy();

	void wyswietl_dane_z_magazynu();

	void wyswietl_dane_finansowe();

	void wyswietl_dane_klientow();

	void wyswietl_dane_z_zamowien();
};

#endif
