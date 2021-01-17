#ifndef KOSZYK_H
#define KOSZYK_H

class Koszyk {

private:
	int id_koszyka;
	int ilosc_produktow;

public:
	void dodaj_do_koszyka(Produkt produkt);

	double wartosc_koszyka(int ilosc, Produkt produkt);

	void przejdz_do_koszyka();

	void kontynuuj_zakupy();
};

#endif
