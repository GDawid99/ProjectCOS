#ifndef REALIZACJA_REKLAMACJI_H
#define REALIZACJA_REKLAMACJI_H

class Realizacja_reklamacji {

private:
	string data_zlozenia;
	string nazwa_towaru;
	bool czyMozliwa;

public:
	void wykonanie_reklamacji();

	bool czy_mozliwa_realizacja();

	void wprowadz_dane_produktu(Reklamacja p);
};

#endif
