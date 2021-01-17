#ifndef OSOBA_H
#define OSOBA_H

using namespace std;

class Osoba {

protected:
	string imie;
	string nazwisko;
	string adres;
	string email;
	string telefon;
	string typ;
public:
	void ustawImie(string imie) {
		this->imie = imie;
	}
	void ustawNazwisko(string nazwisko) {
		this->nazwisko = nazwisko;
	}
	void ustawAdres(string adres) {
		this->adres = adres;
	}
	void ustawEmail(string email) {
		this->email = email;
	}
	void ustawTelefon(string telefon) {
		this->telefon = telefon;
	}
	void ustawTyp(string typ) {
		this->typ = typ;
	}
	void wyswietlDane() {
		cout << imie << endl;
		cout << nazwisko << endl;
		cout << adres << endl;
		cout << email << endl;
		cout << telefon << endl;
		cout << typ << endl;
	}
	string pokazEmail() {
		return email;
	}

};

#endif
