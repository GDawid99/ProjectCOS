#include <list>
#include "Headers/Osoba.h"

class bazaDanych {
	Osoba *osoba = new Osoba;

	list<Osoba> listaOsob;
	listaOsob.push_front(osoba);
};