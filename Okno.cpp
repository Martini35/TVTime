#include "Okno.h"

void Okno::TworzenieOkna() {
	okno.create(VideoMode(1070, 670), "TVTime");
	okno.setFramerateLimit(60);
}

void Okno::Eventy() {

	while (okno.pollEvent(event)) {
		if (event.type == Event::Closed) {
			okno.close();
			zamknij = true;
		}
		zawartosc.Klikniecie(okno, event);
	}
}

void Okno::TworzenieMapy() {

	
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
		if (zamknij) {
			break;
		}
	}
}