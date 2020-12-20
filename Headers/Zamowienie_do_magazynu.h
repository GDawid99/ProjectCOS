#ifndef ZAMOWIENIE_DO_MAGAZYNU_H
#define ZAMOWIENIE_DO_MAGAZYNU_H

class Zamowienie_do_magazynu {

private:
	string data_zlozenia;
	int nr_zamowienia;
	string status;
	int ilosc_towarow;

public:
	double wartosc_zamowienia(int ilosc, Produkt_do_zamowienia produkt);

	string zmien_status_zamowienia(string status);

	void dodaj_przedmiot(Produkt_do_zamowenia p);

	void podaj_ilosc(ilosc_towarow i);
};

#endif
