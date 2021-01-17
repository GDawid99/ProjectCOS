#include "..\Source\Konto.h"

void Konto::zaloz_konto(Klient klient) {
	string tmp;
	cout << "Wprowadz imie: ";
	cin >> tmp;
	klient.ustawImie(tmp);
	cout << "Wprowadz nazwisko: ";
	cin >> tmp;
	klient.ustawNazwisko(tmp);
	cout << "Wprowadz adres: ";
	cin >> tmp;
	klient.ustawAdres(tmp);
	cout << "Wprowadz e - mail: ";
	cin >> tmp;
	klient.ustawEmail(tmp);
	cout << "Wprowadz telefon: ";
	cin >> tmp;
	klient.ustawTelefon(tmp);
	tmp = "Klient";
	klient.ustawTyp(tmp);
	this->klient = klient;
	cout << "Wprowadz has³o: ";
	cin >> haslo;
	stan_konta = 0;
}

void Konto::usun_konto() {
	//pobierz z bazy danych klienta

	
}

void Konto::edytuj_dane(Klient klient) {
	int numer; bool exit = false; string tmp;
	cout << "Ktore dane chcesz zmienic?" << endl;
	cout << "0. Zakoncz edycje" << endl;
	cout << "1. Imie" << endl;
	cout << "2. Nazwisko" << endl;
	cout << "3. Adres" << endl;
	cout << "4. Telefon" << endl;
	cout << "5. Haslo" << endl;
	cout << "Podaj liczbe: " << endl;
	cin >> numer;
	while (exit == false) {
		switch (numer) {
		case 0: exit = true; break;
		case 1: cout << "Wprowadz imie: ";
			cin >> tmp;
			klient.ustawImie(tmp); break;
		case 2: cout << "Wprowadz nazwisko: ";
			cin >> tmp;
			klient.ustawNazwisko(tmp); break;
		case 3: cout << "Wprowadz adres: ";
			cin >> tmp;
			klient.ustawAdres(tmp); break;
		case 4: cout << "Wprowadz telefon: ";
			cin >> tmp;
			klient.ustawTelefon(tmp); break;
		case 5: cout << "Wprowadz has³o: ";
			cin >> haslo; break;
		default: cout << "Bledne polecenie. Prosze wpisac ponownie. Podaj liczbe: ";
			cin >> numer;
		}
	}
	
}

void Konto::pokaz_dane(Klient klient) {
	klient.wyswietlDane();
	string odp; bool proba = true;
	cout << "Czy wyswietlic haslo? [Tak/Nie]: ";
	cin >> odp;
	while (proba) {
		if (odp == "Tak") cout << haslo << endl;
		else if (odp == "Nie") proba = false;
		else {
			cout << "Zle polecenie. Sprobuj ponownie: ";
			cin >> odp;
		}
	}
}

bool Konto::zaloguj(string email, string haslo, Klient klient) {
	if (email == klient.pokazEmail() && haslo == this.haslo) {
		cout << "Zalogowano sie poprawnie." << endl;
		return true;
	}
	else {
		cout << "Niepoprawne dane." << endl;
		return false;
	}
}

bool Konto::wyloguj() {
	cout << "Wylogowano." << endl;
	return true;
}

void Konto::sprawdz_stan_konta() {
	cout << "Stan twojego konta wynosi: " << stan_konta << endl;
}
