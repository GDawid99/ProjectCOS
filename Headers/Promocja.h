#ifndef PROMOCJA_H
#define PROMOCJA_H

class Promocja {

private:
	string typ_promocji;
	int kod_promocji;
	double rabat;

public:
	double oblicz_rabat(double rabat);

	void wybor_promocji(string typ);
};

#endif
