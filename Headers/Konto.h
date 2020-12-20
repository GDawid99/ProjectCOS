#ifndef KONTO_H
#define KONTO_H

class Konto {

private:
	string email;
	string haslo;
	string stan_konta;

public:
	void zaloz_konto();

	void usun_konto();

	void edytuj_dane();

	void pokaz_dane();

	void zaloguj(string email, string haslo);

	void wyloguj();

	string sprawdz_stan_konta();
};

#endif
