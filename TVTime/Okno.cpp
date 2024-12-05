#include "Okno.h"


void Okno::TworzenieOkna() {
	okno.create(VideoMode(1680, 670), "TVTime");
	okno.setFramerateLimit(60);
}

void Okno::Eventy() {

	while (okno.pollEvent(event)) {
		if (event.type == Event::Closed) {
			okno.close();
			zamknij = true;
		}
		if (zawartosc.Klikniecie(okno, event)) {
			TworzenieSzegoly();
		}
	}

	while (szczegoly.pollEvent(event)) {
		if (event.type == Event::Closed) {
			szczegoly.close();
		}
		if (zawartosc.Klikniecie_szczegoly(szczegoly, event)) {
			szczegoly.close();
		}
	}
}

void Okno::TworzenieMapy() {

	zawartosc.OdczytFilmu();
}

void Okno::Rysuj() {

	okno.clear();
	zawartosc.WyswietlOpis(okno);
	zawartosc.WyswietlNawigacja(okno);
	zawartosc.WyswietlFilmy(okno);
	okno.display();
}

void Okno::OknoStart() {

	TworzenieOkna();
	TworzenieMapy();
	while (true) {
		Eventy();
		Rysuj();
		RysujSzczegoly();
		if (zamknij) {
			break;
		}
	}
}

void Okno::TworzenieSzegoly() {
	szczegoly.create(VideoMode(1140, 420), "Szczegoly");
	szczegoly.setFramerateLimit(60);
}

void Okno::RysujSzczegoly() {
	szczegoly.clear();
	zawartosc.SzczegolyWyswietl(szczegoly);
	szczegoly.display();
}