#include "Draw.h"

Draw::Draw() {
	TworzenieOpis();
	TworzenieNawigacja();
	TworzenieFilmy();
}

Draw::~Draw() {

}

void Draw::TworzenieOpis() {
	
	opis[0] = Przyciski(10,10, 60, 50, 0, 255, 0, 0);
	opis[0].DodajNapis("ID", 10);
	opis[1] = Przyciski(80, 10, 450, 50, 0, 255, 0, 0);
	opis[1].DodajNapis("Tytul", 180);
	opis[2] = Przyciski(540, 10, 150, 50, 0, 255, 0, 0);
	opis[2].DodajNapis("Ocena", 20);
	opis[3] = Przyciski(700, 10, 300, 50, 0, 255, 0, 0);
	opis[3].DodajNapis("Gatunek", 70);
	opis[4] = Przyciski(1010, 10, 50, 50, 0, 255, 0, 0);
	opis[4].DodajNapis("", 0);
}

void Draw::TworzenieNawigacja() {
	int ax = 120;
	for (int i = 0; i < 14; i++) {
		nawigacja[i] = Przyciski(ax, 610, 50, 50, 0, 0, 0, 0);
		ax += 60;
	}
	nawigacja[0].DodajNapis("<", 15);
	nawigacja[1].DodajNapis("1", 15);
	nawigacja[2].DodajNapis("2", 15);
	nawigacja[3].DodajNapis("3", 15);
	nawigacja[4].DodajNapis("4", 15);
	nawigacja[5].DodajNapis("5", 15);
	nawigacja[6].DodajNapis("6", 15);
	nawigacja[7].DodajNapis("7", 15);
	nawigacja[8].DodajNapis("8", 15);
	nawigacja[9].DodajNapis("9", 15);
	nawigacja[10].DodajNapis("10", 7);
	nawigacja[11].DodajNapis("11", 7);
	nawigacja[12].DodajNapis("12", 7);
	nawigacja[13].DodajNapis(">", 15);
}

void Draw::TworzenieFilmy() {
	int ay = 90;
	for (int i = 0; i < 10; i++) {
		filmy[i] = Przyciski(10, ay, 1050, 40, 0, 255, 0, 0);
		ay += 50;
	}
}

void Draw::WyswietlOpis(RenderWindow& okno) {
	for (int i = 0; i < 5; i++) {
		opis[i].RysujPrzycisk(okno);
	}
}

void Draw::WyswietlNawigacja(RenderWindow& okno) {
	for (int i = 0; i < 14; i++) {
		nawigacja[i].RysujPrzycisk(okno);
	}
	nawigacja[aktualna_strona].ZmienKolor(161, 153, 153);
}

void Draw::WyswietlFilmy(RenderWindow& okno) {
	for (int i = 0; i < 10; i++) {
		filmy[i].RysujPrzycisk(okno);
	}
}

void Draw::Klikniecie(RenderWindow& okno, Event eve) {

	Vector2i mousePosition = Mouse::getPosition(okno);
	Vector2f mousePositionFloat(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y));


	for (int i = 0; i < 5; i++) {
		if (opis[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			opis[i].ZmienKolor(255, 0, 0);
		}
		else {
			opis[i].ZmienKolor(0, 255, 0);
		}
	}
	for (int i = 0; i < 10; i++) {
		if (filmy[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			filmy[i].ZmienKolor(255, 0, 0);
		}
		else {
			filmy[i].ZmienKolor(0, 255, 0);
		}
	}
	for (int i = 0; i < 14; i++) {
		nawigacja[aktualna_strona].ZmienKolor(161, 153, 153);
		if (nawigacja[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			nawigacja[i].ZmienKolor(218, 208, 208);
		}
		else {
			nawigacja[i].ZmienKolor(0, 0, 0);
		}
	}


	for(int i = 0; i < 14; i++){
		if (nawigacja[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			if (eve.type == Event::MouseButtonPressed && eve.mouseButton.button == Mouse::Left) {
				if (i == 0 && aktualna_strona != 1) {
					aktualna_strona--;
				}
				if (i == 13 && aktualna_strona != 12) {
					aktualna_strona++;
				}
			}
		}
	}
	
}