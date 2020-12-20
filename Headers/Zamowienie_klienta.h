#ifndef ZAMOWIENIE_KLIENTA_H
#define ZAMOWIENIE_KLIENTA_H

class Zamowienie_klienta {

private:
	string data_zlozenia;
	string data_wyslania;
	string status;
	int id_zamowienia;

public:
	double wartosc_zamowienia(Koszyk k);

	string zmien_status_zamowienia(string status);

	void wykorzystaj_promocje(Promocja promocja);

	void zloz_zamowienie();

	string sprawdz_status();

	bool czy_w_realizacji();

	void dane_zamowienia();

	bool czyOplacone();

	bool czyAnulowano();

	double czasOczekiwania();
};

#endif
